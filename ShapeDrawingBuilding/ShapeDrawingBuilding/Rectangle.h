#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(string name, double length, double width);
    double area() override;
};

