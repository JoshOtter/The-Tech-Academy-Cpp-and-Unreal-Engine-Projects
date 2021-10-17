#pragma once
#include "Shape.h"

class Triangle : public Shape
{
protected:
	double Base;
	double Height;
public:
	Triangle() : Base(0.0), Height(0.0)
	{
	}
	Triangle(string triangleColor, double triangleBase, double triangleHeight);
	double GetArea();
};