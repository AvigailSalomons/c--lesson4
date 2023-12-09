#include "Triangle.h"
#define _CMATH_;


Triangle::Triangle() {
	Shape::Shape(3);
}

bool Triangle::isSpeciial() const
{
	int x = points[0].getX() - points[1].getX();
    int y= points[0].getY() - points[1].getY();
	
	int x1 = abs(points[0].getX() - points[1].getX());
	int y1 = abs(points[0].getY() - points[1].getY());
	int r=
	
}
