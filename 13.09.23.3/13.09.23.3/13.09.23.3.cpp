#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Drawing.h"
#include "Building.h"
using namespace std;

int main()
{
	Building* building = new Building();

	building->addFloor(new Circle("circle", 6));
	building->addFloor(new Rectangle("rectangle",2, 3));
	building->addFloor(new Triangle("tiangle", 5, 4));

	cout << "Total building area: " << endl;
	cout << building->totalBuildingArea() << endl;
}
