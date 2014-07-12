/*
*
* imagehandler.cpp
*
* the stone rendering part has been coded by Marin Ferecatu - thanks, good job!
*
*/


#include "defines.h"
#include "imagehandler.h"
#include "icons.h"
#include "qglobal.h"
#include "setting.h"
#include <qpixmap.h>

//#include <iostream>

//#ifdef USE_XPM
#include WOOD_PIC

#include TABLE_PIC
#include ALT_GHOST_BLACK
#include ALT_GHOST_WHITE
//#endif

#ifdef Q_WS_WIN
 #define M_PI 3.141592653
 double drand48() { return rand()*1.0/RAND_MAX; }
#endif


/*
* Static class variables
*/
QPixmap* ImageHandler::woodPixmap1 = NULL;

QPixmap* ImageHandler::tablePixmap = NULL;
QCanvasPixmapArray* ImageHandler::altGhostPixmaps = NULL;
int ImageHandler::classCounter = 0;


/**
* Stone rendering code
* Heavily inspired from Jago and CGoban code
* http://www.igoweb.org/~wms/comp/cgoban
* /http://www.rene-grothmann.de/jago/
**/

void ImageHandler::icopy(int *im, QImage &qim, int w, int h) {
	
	for (int y = 0; y < h; y++) {
		uint *p = (uint *)qim.scanLine(y);
		for(int x = 0; x < w; x++) {
			p[x] = im[y*h + x];
		}
	}
}


void ImageHandler::decideAppearance(WhiteDesc *desc, int size)  {
	double  minStripeW, maxStripeW, theta;
	
	minStripeW = (double)size / 20.0;
	if (minStripeW < 1.5)
		minStripeW = 1.5;
	maxStripeW = (double)size / 10.0;
	if (maxStripeW < 2.5)
		maxStripeW = 2.5;

	theta = drand48() * 2.0 * M_PI;
	desc->cosTheta = cos(theta);
	desc->sinTheta = sin(theta);
	desc->stripeWidth = 1.5*minStripeW +
		(drand48() * (maxStripeW - minStripeW));
	
	desc->xAdd = 3*desc->stripeWidth +
		(double)size * 3.0;
	
	desc->stripeMul = 3.0;
	desc->zMul = drand48() * 650.0 + 70.0;
}


double ImageHandler::getStripe(WhiteDesc &white, double bright, double z, int x, int y) {
	double wBright;
	
	bright = bright/256.0;
	
	double wStripeLoc = x*white.cosTheta - y*white.sinTheta +	white.xAdd;
	double wStripeColor = fmod(wStripeLoc + (z * z * z * white.zMul) *
		white.stripeWidth,
		white.stripeWidth) / white.stripeWidth;
	wStripeColor = wStripeColor * white.stripeMul - 0.5;
	if (wStripeColor < 0.0)
		wStripeColor = -2.0 * wStripeColor;
	if (wStripeColor > 1.0)
		wStripeColor = 1.0;
	wStripeColor = wStripeColor * 0.15 + 0.85;
	
	if (bright < 0.95)
		wBright = bright*wStripeColor;
	else 
		wBright = bright*sqrt(sqrt(wStripeColor));
	
	if (wBright > 255)
		wBright = 255;
	if (wBright < 0)
		wBright = 0;
	
	return wBright*255;
}
extern bool isHidingStones;
void ImageHandler::paintBlackStone (QImage &bi, int d, int stone_render) 
{
	
	const double pixel=0.8;//,shadow=0.99;
	// board color
	//int col = antialiasingColor; //0xecb164;
	//int blue=col&0x0000FF,green=(col&0x00FF00)>>8,red=(col&0xFF0000)>>16;
	
	bool Alias=true;
	
	// these are the images
	int *pb=new int[d*d];
	int i, j, g,g1,g2, k;
	double di, dj, d2=(double)d/2.0-5e-1, r=d2-2e-1, f=sqrt(3);
	double x, y, z, xr,xr1, xr2, xg1,xg2,hh;
		
	k=0;
	
	bool smallerstones = false;
	if (smallerstones) r-=1;
	
	for (i=0; i<d; i++)
		for (j=0; j<d; j++) {
			di=i-d2; dj=j-d2;
			hh=r-sqrt(di*di+dj*dj);
			if (hh>=0) 
			{
				if (stone_render>1)
				{
					z=r*r-di*di-dj*dj;
					if (z>0) z=sqrt(z)*f;
					else z=0;
					x=di; y=dj;
					xr=sqrt(6*(x*x+y*y+z*z));
					xr1=(2*z-x+y)/xr;
					//xr2=(1.6*z+x+1.75*y)/xr;
					xr2=(2*z+x-y)/xr;
				
					if (xr1>0.9) xg1=(xr1-0.9)*10;
					else xg1=0;
					//if (xr2>1) xg2=(xr2-1)*10;
					if (xr2>0.96) xg2=(xr2-0.96)*10;
					else xg2=0;
				
					//random = drand48();
				
					g1=(int)(5+10*drand48() + 10*xr1 + xg1*140);
					g2=(int)(10+10* xr2+xg2*160);
					g=(g1 > g2 ? g1 : g2);
					//g=(int)1/ (1/g1 + 1/g2);
				
					if (hh>pixel || !Alias) {
						pb[k]=(255<<24)|(g<<16)|(g<<8)|g;
					}
					else {			
						pb[k]=((int)(hh/pixel*255)<<24)|(g<<16)|(g<<8)|g;
					}

				}
				else //code for flat stones
				{
					g=0;
					pb[k]=((int)(255)<<24)|(g<<16)|(g<<8)|g;	
				}
			}
			else pb[k]=0;
			k++;
			
		}
		
		// now copy the result in QImages
		icopy(pb, bi, d, d);
		
		// free memory
		delete[] pb;
}

// shadow under stones
void ImageHandler::paintShadowStone (QImage &si, int d) {
	
	//const double pixel=0.8,shadow=0.99;

	// these are the images
	int *pw=new int[d*d];
	int i, j,  k;
	double di, dj, d2=(double)d/2.0-5e-1, r=d2-2e-1;
	double hh;
	
	k=0;
	
	bool smallerstones = false;
	if (smallerstones) r-=1;
	
	for (i=0; i<d; i++)
		for (j=0; j<d; j++) {
			di=i-d2; dj=j-d2;
			hh=r-sqrt(di*di+dj*dj);
			if (hh>=0) {
				hh=2*hh/r ;
				if (hh> 1)  hh=1;
				
				pw[k]=((int)(255*hh)<<24)|(1<<16)|(1<<8)|(1);
			}
			else pw[k]=0;
			k++;
			
		}
		
		// now copy the result in QImages
		icopy(pw, si, d, d);
		
		// free memory
		delete[] pw;
}


// shaded white stones
void ImageHandler::paintWhiteStone (QImage &wi, int d, int stone_render)//bool stripes ) {
{
	WhiteDesc desc;
	decideAppearance(&desc, d);

	// the angle from which the shadow starts (measured to the light direction = pi/4)
	// alpha should be in (0, pi)
	const double ALPHA = M_PI/4;
	// how big the shadow is (should be < d/2)
	const double STRIPE = d/5.0;

	double theta;
	const double pixel=0.8;//, shadow=0.99;
	// board color
	//int col = antialiasingColor; //0xecb164;
	//int blue=col&0x0000FF,green=(col&0x00FF00)>>8,red=(col&0xFF0000)>>16;

	bool Alias=true;
	
	// these are the images
	int *pw=new int[d*d];
	int i, j, g, g1,g2,k;
	double di, dj, d2=(double)d/2.0-5e-1, r=d2-2e-1, f=sqrt(3);
	double x, y, z, xr, xr1, xr2, xg1,xg2, hh;
	
	k=0;
	
	bool smallerstones = false;
	if (smallerstones) r-=1;

	for (i=0; i<d; i++)
		for (j=0; j<d; j++) {
			di=i-d2; dj=j-d2;
			hh=r-sqrt(di*di+dj*dj);
			if (hh>=0) 
			{
				if (stone_render > 1)
				{
					z=r*r-di*di-dj*dj;
					if (z>0) z=sqrt(z)*f;
					else z=0;
					x=di; y=dj;
					xr=sqrt(6*(x*x+y*y+z*z));
					xr1=(2*z-x+y)/xr;
					xr2=(2*z+x-y)/xr;
				
				
					if (xr1>0.9) xg1=(xr1-0.9)*10;
					else xg1=0;

					if (xr2>0.92) xg2=(xr2-0.92)*10;
					else xg2=0;
				
					g2=(int)(200+10* xr2+xg2*45);
				//g=(g1 > g2 ? g1 : g2);
				
					theta = atan2(double(j-d/2), double(i-d/2)) + M_PI - M_PI/4 + M_PI/2;
					bool stripeband = theta > ALPHA && theta < 2*M_PI-ALPHA;

					if (theta > M_PI) 
					theta = (2*M_PI-theta);

					double stripe = STRIPE*sin((M_PI/2)*(theta-ALPHA)/(M_PI-ALPHA));
					if (stripe < 1) stripe = 1;
				
					double g1min=(int)(0+10*xr1+xg1*45), g2min=(int)(0+10*xr2+xg2*45);
					double g1max=(int)(200+10*xr1+xg1*45), g2max=(int)(200+10* xr2+xg2*45);;
					g1min = g1max - (g1max-g1min)*(1-exp(-1*(theta-ALPHA)/(M_PI-ALPHA)));
					g2min = g2max - (g2max-g2min)*(1-exp(-1*(theta-ALPHA)/(M_PI-ALPHA)));
				
					if (hh < STRIPE && hh > pixel && stripeband) {
					
						if (hh > stripe ) 
						{
							g1 = (int)g1max;
							g2 = (int)g2max;
						}
						else //if (hh < stripe)
						{
							g1 = int(g1min + (g1max-g1min)*sqrt(hh/stripe));
							g2 = int(g2min + (g2max-g2min)*sqrt(hh/stripe));
						}
/*						else
						{
							g1=125;
							g2=125;
						}
*/					
						g=(g1 > g2 ? g1 : g2);
				
						if (stone_render == 3) //stripes)
							g = (int)getStripe(desc, g, xr1/7.0, i, j);
						pw[k]=(255<<24)|(g<<16)|((g)<<8)|(g);
					}
					else if (hh>pixel || !Alias) {
					//g1=(int)(190+10*drand48()+10*xr1+xg1*45);
					
						g=(int)(g1max > g2max ? g1max : g2max);
					
						if (stone_render == 3)//stripes)
							g = (int)getStripe(desc, g, xr1/7.0, i, j);
						pw[k]=(255<<24)|(g<<16)|((g)<<8)|(g);
					}
					else {
					
						g1=(int)(stripeband ? g1min : g1max);
						g2=(int)(stripeband ? g2min : g2max);
					
						g=(g1 > g2 ? g1 : g2);
					
						if (stone_render == 3)//stripes)
							g = (int)getStripe(desc, g, xr1/7.0, i, j);
				
						pw[k]=((int)(hh/pixel*255)<<24)|(g<<16)|(g<<8)|g;				
					}
				}
				else // Code for flat stones
				{
					// draws a black circle for 2D stones
					if ((hh>=-1)&&(hh<=1))
					{
						g=0;
						pw[k]=((int)(255)<<24)|(g<<16)|(g<<8)|g;
					}	
					else if (hh>0)
					{
						g=255;
						pw[k]=((int)(255)<<24)|(g<<16)|(g<<8)|g;
					}
				}	
				
			}
			else pw[k]=0;
			k++;
		}

	// now copy the result in QImages
	icopy(pw, wi, d, d);

	// free memory
	delete[] pw;

}


/**
* end stone rendering code
**/


// end MF

ImageHandler::ImageHandler()
{
    // Load the pixmaps
//#ifdef USE_XPM
    if (tablePixmap == NULL)
		tablePixmap = new QPixmap(const_cast<const char**>(table_xpm));
    if (woodPixmap1 == NULL)
		woodPixmap1 = new QPixmap(const_cast<const char**>(wood_xpm));
/*
#else
    if (tablePixmap == NULL)
		tablePixmap = new QPixmap(TABLE_PIC);
    if (woodPixmap1 == NULL)
		woodPixmap1 = new QPixmap(WOOD_PIC);
#endif
*/
    if (tablePixmap == NULL || tablePixmap->isNull())
		qFatal("Could not load pixmaps.");
    
    stonePixmaps = NULL;
    ghostPixmaps = NULL;
	
    // Init the alternate ghost pixmaps
    if (altGhostPixmaps == NULL)
    {
//#ifdef USE_XPM
		QPixmap alt1(const_cast<const char**>(alt_ghost_black_xpm));
		QPixmap alt2(const_cast<const char**>(alt_ghost_white_xpm));
/*
#else
		QPixmap alt1(ALT_GHOST_BLACK);
		QPixmap alt2(ALT_GHOST_WHITE);
#endif
*/
		if (alt1.isNull() || alt2.isNull())
			qFatal("Could not load alt_ghost pixmaps.");
		QList<QPixmap> list;
		list.append(&alt1);
		list.append(&alt2);
		QList<QPoint> hotspots;
		hotspots.append(new QPoint(alt1.width()/2, alt1.height()/2));
		hotspots.append(new QPoint(alt2.width()/2, alt2.height()/2));
		altGhostPixmaps = new QCanvasPixmapArray(list, hotspots);
    }
    CHECK_PTR(altGhostPixmaps);
	
    classCounter ++;
}

ImageHandler::~ImageHandler()
{
    classCounter --;
    if (classCounter == 0)
    {
		delete woodPixmap1;
		woodPixmap1 = NULL;

		delete tablePixmap;
		tablePixmap = NULL;
		delete altGhostPixmaps;
		altGhostPixmaps = NULL;
    }
	
    delete stonePixmaps;
    delete ghostPixmaps;
}

QPixmap* ImageHandler::getBoardPixmap(QString filename) //skinType s)
{
	
	QPixmap *p = new QPixmap(filename) ;

	if (p->isNull())
		return woodPixmap1;
	else 
		return p;

}

QPixmap* ImageHandler::getTablePixmap(QString filename) //skinType s)
{
	
	QPixmap *p = new QPixmap(filename) ;

	if (p->isNull())
		return tablePixmap;
	else 
		return p;

}
void ImageHandler::init(int size)
{
	// Scale the images
	size = size * 9 / 10;
	
	//*******
	//bool shadow = setting->readBoolEntry("STONES_SHADOW");
	//bool stripes = setting->readBoolEntry("STONES_SHELLS");
	int stone_look = setting->readIntEntry("STONES_LOOK");

	QList<QPixmap> list, ghostlist;
	QImage iw1 = QImage(size, size, 32);
	QList<QPoint> hotspots, ghotspots ;
	QPoint point(size/2, size/2);

	//black stone
	QImage ib = QImage(size, size, 32);
	ib.setAlphaBuffer(TRUE);
	paintBlackStone(ib, size, stone_look);
	QPixmap *ibp = new QPixmap();
	ibp->convertFromImage(ib, 
		QPixmap::PreferDither | 
		QPixmap::DiffuseAlphaDither | 
		QPixmap::DiffuseDither);
	list.append(ibp);
	hotspots.append(&point);

	QImage gb(ib);
	ghostImage(&gb);
	ghostlist.append(new QCanvasPixmap(gb));
	ghotspots.append(&point);

	// white stones	
	for (int i=1 ;	i<=WHITE_STONES_NB;	i++)
	{
		iw1 = QImage(size, size, 32);
		iw1.setAlphaBuffer(TRUE);
		paintWhiteStone(iw1, size, stone_look);//stripes);
		QPixmap *iw1p = new QPixmap();
		iw1p->convertFromImage(iw1, 
			QPixmap::PreferDither | 
			QPixmap::DiffuseAlphaDither | 
			QPixmap::DiffuseDither);
		list.append(iw1p);
		hotspots.append(&point);

		QImage gw1(iw1);
		ghostImage(&gw1);
		ghostlist.append(new QCanvasPixmap(gw1));
		ghotspots.append(&point);
	}
	
	//shadow under the stones
	QImage is = QImage(size, size, 32);
	is.setAlphaBuffer(TRUE);	
	if (stone_look ==3) //shadow)
		paintShadowStone(is, size);
	else
		is.reset();
	QPixmap *isp = new QPixmap();
	ibp->convertFromImage(is, 
		QPixmap::PreferDither | 
		QPixmap::DiffuseAlphaDither | 
		QPixmap::DiffuseDither);
	list.append(isp);
	hotspots.append(&point);

	// Assemble the data in the QCanvasPixmapArray
	stonePixmaps = new QCanvasPixmapArray(list, hotspots);
	
	ghostPixmaps = new QCanvasPixmapArray(ghostlist, ghotspots);
	
	
}

void ImageHandler::rescale(int size)//, bool smallerStones)
{
	CHECK_PTR(stonePixmaps);
	CHECK_PTR(ghostPixmaps);

	size = size + 1;

	//bool shadow = setting->readBoolEntry("STONES_SHADOW");
	//bool stripes = setting->readBoolEntry("STONES_SHELLS");
	int stone_look = setting->readIntEntry("STONES_LOOK");

	//repaint black stones
	QImage ib = QImage(size, size, 32);
	ib.setAlphaBuffer(TRUE);
	paintBlackStone(ib, size, stone_look);
	stonePixmaps->setImage(0, new QCanvasPixmap(ib));
	stonePixmaps->image(0)->setOffset(size/2, size/2);
	QImage gb(ib);
	ghostImage(&gb);
	ghostPixmaps->setImage(0, new QCanvasPixmap(gb));
	ghostPixmaps->image(0)->setOffset(size/2, size/2);

	// white stones	
	QImage iw1 = QImage(size, size, 32);
	iw1.setAlphaBuffer(TRUE);
	
	for (int i=1 ;	i<=WHITE_STONES_NB;	i++)
	{
		paintWhiteStone(iw1, size, stone_look);//stripes);
		stonePixmaps->setImage(i, new QCanvasPixmap(iw1));
		stonePixmaps->image(i)->setOffset(size/2, size/2);
		QImage gw1(iw1);
		ghostImage(&gw1);
		ghostPixmaps->setImage(i, new QCanvasPixmap(gw1));
		ghostPixmaps->image(i)->setOffset(size/2, size/2);
	}
	
	// shadow
	QImage is = QImage(size, size, 32);
	is.setAlphaBuffer(TRUE);
	if (stone_look == 3)//shadow) 
		paintShadowStone(is, size);
	else
		is.reset();
	stonePixmaps->setImage(WHITE_STONES_NB +1, new QCanvasPixmap(is));
	stonePixmaps->image(WHITE_STONES_NB +1)->setOffset(size/2, size/2);

	// QQQ add transparency image
	int adding = 1+WHITE_STONES_NB; // black stone + white stone + shadow
	QImage alpha = QImage(size, size, 32);
	alpha.setAlphaBuffer(TRUE);
	alpha.reset();
	stonePixmaps->setImage(adding+1, new QCanvasPixmap(alpha));
	stonePixmaps->image(adding+1)->setOffset(size/2, size/2);
}

void ImageHandler::ghostImage(QImage *img)
{
    img->setAlphaBuffer(true);
    img->convertDepth(32);

       
    int w = img->width(),
		h = img->height(),
		x, y;

    for (y=0; y<h; y++)
    {
		uint *line = (uint*)img->scanLine(y);
		for (x=0; x<w; x++)
		{
			//if ((x%2 && !(y%2)) || (!(x%2) && y%2))
			{
				line[x] = qRgba(qRed(line[x]), qGreen(line[x]), qBlue(line[x]), (line[x] ? 125 : 0));
			}
		}
    }
}
