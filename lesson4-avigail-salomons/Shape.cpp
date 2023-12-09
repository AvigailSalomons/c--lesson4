#include "Shape.h"
#include "iostream"
using namespace std;

Shape::Shape()
{
}

Shape::Shape(int numOfPoint)
{
	points = new Points[numOfPoint +1];
	int x, y;
	cout << "enter values";
	for (int i = 0; i < numOfPoint; i++)
		{
		cin >> x;
		points[i].setX(x);
		cin >> y;
		points[i].setX(y);//לשאול
	}
}

Shape::Shape(const Shape& otherShape)
{
	  numOfPoint = otherShape.numOfPoint;
	for (int i = 0; i < otherShape.numOfPoint; i++)
	{
		points[i] = otherShape.points[i];
	}
}

Shape::Shape(Shape&& otherShape)
{
	numOfPoint = otherShape.numOfPoint;
	for (int i = 0; i < otherShape.numOfPoint; i++)
	{
		points[i] = otherShape.points[i];
	}
	otherShape.points = nullptr;

}

Shape::~Shape()
{
	if (points)
		delete[]points;
	points = nullptr;
}

float const Shape::area()
{
}


std::ostream& operator<<(std::ostream& lhs, const Shape& rhs)
{
	lhs << "points:";
	for (int i = 0; i < rhs.numOfPoint; i++)
	{
		lhs << "( "<<rhs.points[i].getX()<<","<< rhs.points[i].getY()<<")";
	}
	return lhs;
}
