#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Dog
{
private:
	string breed;
	string color;
	double height;
	int weight;
	bool isLyingDown = false;
	bool isSitting = false;
public:
	Dog() : breed("Unknown"), color("Unknown"), height(0.0)
	{
	}
	Dog(string dogBreed, string dogColor, double dogHeight, int dogWeight);
	void Shake();
	void Sit();
	void LayDown();
};