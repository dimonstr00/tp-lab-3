#include <math.h>
#include "Circle.h"
 
double pi = 3.14;
Circle::Circle(){}
Circle::~Circle(){}
void Circle::setRadius(double r)
{
	this->radius = fabs(r);
	this->area = pi * this->radius*this->radius;
	this->ference = 2 * pi*this->radius;
}
void Circle::setArea(double a)
{
	this->area = a;
	this->radius = sqrt(a / pi);
	this->ference= 2 * pi*this->radius;
}
void Circle::setFerence(double f)
{
	this->ference = f;
	this->radius = f / (2 * pi);
	this->area= pi * this->radius*this->radius;
}
double Circle::getArea() 
{
	return this->area;
}

double Circle::getFerence() 
{
	return this->ference;
}

double Circle::getRadius() 
{
	return this->radius;
}