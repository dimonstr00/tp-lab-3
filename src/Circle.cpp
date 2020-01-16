#include <math.h>
#include "Circle.h"
 
double pi = 3.14;
Circle::Circle(double radius){
	this->radius = radius;
	this->area = pi * radius * radius;
	this->ference = 2 * pi*radius;
}
Circle::~Circle(){}
void Circle::setRadius(double r)
{
	this->radius = r;
	this->area = pi * r * r;
	this->ference = 2 * pi*r;
}
void Circle::setArea(double a)
{
	this->area = a;
	this->radius = sqrt(a / pi);
	this->ference= a*2*radius;
}
void Circle::setFerence(double ference)
{
	this->ference = ference;
	this->radius = ference / (2 * pi);
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