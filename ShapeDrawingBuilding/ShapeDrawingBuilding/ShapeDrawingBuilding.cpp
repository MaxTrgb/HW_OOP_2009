#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	Shape* circle = new Circle("circle", 16);

	cout << circle->area();

}
