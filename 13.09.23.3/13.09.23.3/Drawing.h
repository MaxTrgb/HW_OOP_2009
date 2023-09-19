#pragma once
#include <iostream>
#include "Shape.h"
#include <vector>
using namespace std;

class Drawing
{
private:
	vector <Shape*> shapes;
public:
	Drawing(){}
	void addShape(Shape* shape);
	double totalArea();
};

