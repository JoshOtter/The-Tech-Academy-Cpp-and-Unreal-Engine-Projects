#include "Shape.h"

Shape::Shape(string shapeColor)
{
	Color = shapeColor;
}

double Shape::GetArea()
{
	//This will be polymorphed for use in subclasses.
	return 0.0;
}