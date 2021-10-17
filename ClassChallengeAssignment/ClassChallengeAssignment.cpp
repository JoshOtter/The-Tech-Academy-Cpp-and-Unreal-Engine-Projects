#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using std::cout;

int main()
{
	Rectangle rect1("Blue", 5.0, 4.0);
	Rectangle rect2("Green", 3.5, 4.5);
	double rectArea1 = rect1.GetArea();
	double rectArea2 = rect2.GetArea();
	cout << rectArea1 << '\n';
	cout << rectArea2 << '\n';
	Triangle tri1("Red", 3.0, 8.5);
	Triangle tri2("Purple", 4.0, 5.0);
	double triArea1 = tri1.GetArea();
	double triArea2 = tri2.GetArea();
	cout << triArea1 << '\n';
	cout << triArea2 << '\n';
	Circle circ1("Yellow", 4.0);
	Circle circ2("Orange", 9.3);
	double circArea1 = circ1.GetArea();
	double circArea2 = circ2.GetArea();
	cout << circArea1 << '\n';
	cout << circArea2 << '\n';
}