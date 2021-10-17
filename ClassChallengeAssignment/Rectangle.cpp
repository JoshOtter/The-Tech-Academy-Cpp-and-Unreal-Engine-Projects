#include "Rectangle.h"

Rectangle::Rectangle(string rectangleColor, double rectangleHeight, double rectangleWidth)
{
	Color = rectangleColor;
	Height = rectangleHeight;
	Width = rectangleWidth;
}

double Rectangle::GetArea()
{
	return Height * Width;
}