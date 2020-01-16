#pragma once
class Circle
{  
private:
	double radius = 0, ference = 0, area = 0;
public:
	Circle();
	~Circle();

	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);

	double getRadius();
	double getFerence();
	double getArea();
};