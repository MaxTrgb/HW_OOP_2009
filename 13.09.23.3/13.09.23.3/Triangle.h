#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
private:
    int a;
    int b;
public:
    Triangle();
    Triangle(string name, int a, int b);
    int area()override;
};

