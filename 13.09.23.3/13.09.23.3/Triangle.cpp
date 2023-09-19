#include "Triangle.h"
Triangle::Triangle() {
	a = 0;
	b = 0;
}
Triangle::Triangle(string name, int a, int b) : Shape(name) {
	this->a = a;
	this->b = b;
}
int Triangle::area() {
	return 0.5 * (a * b);	 
}
