#pragma once
class Circle
{  
private:
	double radius, ference, area;
public:
	Circle(double radius);
	~Circle();

	void setRadius(double r);
	void setFerence(double ference);
	void setArea(double a);

	double getRadius();
	double getFerence();
	double getArea();
};