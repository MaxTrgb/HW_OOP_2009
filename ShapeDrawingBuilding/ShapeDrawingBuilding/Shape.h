#pragma once
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

class Shape
{
private:
	string name;
public:
	Shape();
	Shape(string name);
	virtual double area() = 0;

};

