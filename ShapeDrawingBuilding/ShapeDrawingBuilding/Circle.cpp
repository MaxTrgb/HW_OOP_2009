#include "Circle.h"
Circle::Circle() {
	r = 0;
}
Circle::Circle(string name, double r) : Shape(name){
	this->r = r;
}
double Circle::area()  {
	return 3.14 * r * r;
}