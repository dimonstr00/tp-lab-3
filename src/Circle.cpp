#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"
using namespace std;
Circle::Circle(double radius) {
	this->radius = radius;
	ference = 2 * M_PI* radius;
	area = M_PI * radius * radius;

}
void Circle::setRadius(double radius)
{
	this->radius = radius;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;

};
void Circle::setFerence(double ference)
{
	this->ference = ference;
	radius = ference / (2 * M_PI);
	area = M_PI * radius * radius;

};
void Circle::setArea(double area)
{
	this->area = area;
	radius = sqrt(area / M_PI);
	ference = 2 * radius * M_PI;

};
double Circle::getRadius()
{
	return radius;
};
double Circle::getFerence()
{
	return ference;
};
double Circle::getArea() {
	return area;
};