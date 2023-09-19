#include "Rectangle.h"
Rectangle::Rectangle() {
	length = 0;
	width = 0;
}
Rectangle::Rectangle(string name, double length, double width) : Shape(name) {
	this->length = length;
	this->width = width;
}
double Rectangle::area() {
	return width * length;
}