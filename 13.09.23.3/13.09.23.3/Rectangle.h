#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    int a;
    int b;
public:
    Rectangle();
    Rectangle(string name, int a, int b);
    int area() override;
};

