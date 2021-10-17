#include "Triangle.h"

Triangle::Triangle(string triangleColor, double triangleBase, double triangleHeight)
{
	Color = triangleColor;
	Base = triangleBase;
	Height = triangleHeight;
}

double Triangle::GetArea()
{
	return (Base * Height) / 2;
}