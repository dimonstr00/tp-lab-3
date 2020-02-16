#pragma once
class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double radius_set);


	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius();
	double getFerence();
	double getArea();

};