#pragma once
#include "Shape.h"
class Circle :public Shape
{
	float radius;
public:
	Circle(float radius);
	bool isSpeciial()const override;
	void  printisSpeciial() const;

};

