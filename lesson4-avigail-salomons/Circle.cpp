#include "Circle.h"
using namespace std;
#include "iostream"


Circle::Circle(float radius)
{
	this->radius = radius;
}

bool Circle::isSpeciial() const
{
	if (points[0].getX() == points[0].getY() == 0) {
		
	}
}

void Circle::printisSpeciial() const
{
	cout << "A canonicial circle whis radius" << radius;
}
