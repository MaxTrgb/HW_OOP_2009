#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int r;
public:
    Circle();
    Circle(string name, int r);
    int area() override;
};

