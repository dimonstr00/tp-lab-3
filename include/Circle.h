//
// Created by fiskirton on 11/5/19.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

#include <cmath>

class Circle{

private:

    double radius;
    double ference{};
    double area{};

public:
    const double pi = floor(M_PI * pow(10, 4) + 0.05) / pow(10, 4);
    explicit Circle(double = 0.0);


    void setRadius(double r){this->radius = r; this->calcFerence(); this->calcArea();}
    void setFerence(double f){this->ference = f; this->calcRadiusFromFerence(f); this->calcArea();}
    void setArea(double a){this->area = a; this->calcRadiusFromArea(a); this->calcFerence();}

    double getRadius(){ return this->radius;}
    double getFerence(){ return floor(this->ference * pow(10, 1) + 0.5) / pow(10, 1);}
    double getArea(){ return floor(this->area);}
    double getNotFlooredFerence(){return this->ference;}
    double getNotFlooredArea(){ return this->area;}

    void calcRadiusFromFerence(double);
    void calcRadiusFromArea(double);
    void calcFerence();
    void calcArea();
};


#endif //TASK1_CIRCLE_H
