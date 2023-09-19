#include "Triangle.h"
Triangle::Triangle() {
	height = 0;
	base = 0;
}
Triangle::Triangle(string name, double base, double height) : Shape(name){
	this->base = base;
	this->height = height;
}
double Triangle::area() {
	return 0.5 * (base * height);
}
