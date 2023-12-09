#pragma once
#include "Points.h"
#include "iostream"
class Shape
{
	int numOfPoint;
protected:
	Points* points;
public:
	
	Shape();
	Shape(int numOfPoint);
	Shape(const Shape& otherShape);
	Shape(Shape&& otherShape);
	virtual ~Shape();
	friend std::ostream& operator<<(std::ostream& lhs, const Shape& rhs);
	float const area();
	bool virtual isSpeciial() const;
	void  printisSpeciial() const;

};

