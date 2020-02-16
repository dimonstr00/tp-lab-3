#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"
#include "task1.h"


using namespace std;
double calcDelta() 
{
	double radius = 6378100.0;
	double rope = 1.0;
	Circle earth(radius);

	double dlina = earth.getFerence() + rope;
	Circle nCircle();
	earth.setFerence(dlina);

	double delta = earth.getRadius() - radius;

	return delta;
}
double calcCost() {
	double pul_rad = 3.0;
	Circle pul = Circle(pul_rad);
	Circle fence = Circle(pul_rad + 1.0);
	fence.setRadius(pul_rad + 1.0);
	double sum = 1000 * pul.getFerence() + 2000 * fence.getFerence();

	return sum;
}