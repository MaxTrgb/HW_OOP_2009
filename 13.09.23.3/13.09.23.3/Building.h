#pragma once
#include "Drawing.h"
class Building
{
private:
	Drawing floor;
public:
	Building() {}
	void addFloor(Shape* shape);
	double totalBuildingArea();
};

