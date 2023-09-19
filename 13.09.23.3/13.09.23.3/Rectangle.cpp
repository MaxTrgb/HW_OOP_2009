#include "Rectangle.h"
Rectangle::Rectangle() {
	a = 0;
	b = 0;
}
Rectangle::Rectangle(string name, int a, int b) : Shape(name) {
	this->a = a;
	this->b = b;
}
int Rectangle::area() {
	return a * b;
	 
}
