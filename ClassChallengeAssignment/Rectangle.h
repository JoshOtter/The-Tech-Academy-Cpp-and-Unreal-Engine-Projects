#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
protected:
	double Height;
	double Width;
public:
	Rectangle() : Height(0.0), Width(0.0)
	{
	}
	Rectangle(string rectangleColor, double rectangleHeight, double rectangleWidth);
	double GetArea();
};