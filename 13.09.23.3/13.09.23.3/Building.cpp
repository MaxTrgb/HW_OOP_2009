#include "Building.h"

void Building::addFloor(Shape* shape)
{
	floor.addShape(shape);
}

double Building::totalBuildingArea()
{
	return floor.totalArea();
}
