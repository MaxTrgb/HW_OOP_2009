#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
private:
    double base;
    double height;
public:
    Triangle();
    Triangle(string name, double base, double height);
    double area() override;
};

