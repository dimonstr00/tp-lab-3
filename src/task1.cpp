#include "task1.h"
#include "Circle.h"
 
double calcDelta() 
{ 
	Circle earth = Circle();
	Circle rope = Circle();

	earth.setRadius(6378.1);
	rope.setFerence(earth.getFerence() + 0.001);

	double dif = rope.getRadius() - earth.getRadius();
	return dif*1000;
}
double calcCost() 
{
	Circle pool = Circle();
	Circle fRad = Circle();
	pool.setRadius(3);
	fRad.setRadius(pool.getRadius() + 1);

	double road = (fRad.getArea() - pool.getArea()) * 1000;
	double railing = fRad.getFerence() * 2000;

	return road + railing;
}
