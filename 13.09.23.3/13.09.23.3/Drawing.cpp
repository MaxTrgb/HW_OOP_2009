#include "Drawing.h"

void Drawing::addShape(Shape* shape)
{
	shapes.push_back(shape);
}

double Drawing::totalArea()
{
	double totalArea = 0;
	for (Shape* sh : shapes )
	{
		totalArea += sh->area();
	}
	return totalArea;
}
