#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>


Circle::Circle(string circleColor, double circleRadius)
{
	Color = circleColor;
	Radius = circleRadius;
}

double Circle::GetArea()
{
	return 3.1415926535897932384626433832795 * Radius * Radius;
}