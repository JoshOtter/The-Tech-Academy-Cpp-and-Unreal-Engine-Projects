#pragma once
#include <string>
using std::string;

class Shape
{
protected:
	string Color;
public:
	Shape() : Color("Unknown")
	{
	}
	Shape(string shapeColor);
	double GetArea();
};