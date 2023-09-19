#pragma once
#include <iostream>
using namespace std;

class Shape
{
	string name;
public:
	Shape();
	Shape(string);
	virtual int area() = 0;
};