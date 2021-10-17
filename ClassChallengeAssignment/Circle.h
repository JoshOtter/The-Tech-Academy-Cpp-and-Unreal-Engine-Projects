#pragma once
#include "Shape.h"


class Circle : public Shape
{
protected:
	double Radius;
public:
	Circle() : Radius(0.0)
	{
	}
	Circle(string circleColor, double circleRadius);
	double GetArea();
};