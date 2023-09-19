#include "Circle.h"
Circle::Circle() {
	r = 0;
}
Circle::Circle(string name, int r) : Shape(name) {
	this->r = r;
}

int Circle::area(){
	return  3.14 * r * r;	
}