#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    double r;
public:
    Circle();
    Circle(string name, double r);
    double area() override;
};

