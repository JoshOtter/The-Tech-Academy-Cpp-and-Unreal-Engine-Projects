#include "Dog.h"

Dog::Dog(string dogBreed, string dogColor, double dogHeight, int dogWeight)
{
	breed = dogBreed;
	color = dogColor;
	height = dogHeight;
	weight = dogWeight;
}

void Dog::Shake()
{
	cout << "The " + breed + " shakes your hand.\n";
}

void Dog::Sit()
{
	if (!isSitting)
	{
		cout << "The " + breed + " layed down.\n";
		isSitting = true;
		isLyingDown = false;
	}
	else
	{
		cout << "The " + breed + " is already laying down.\n";
	}
}

void Dog::LayDown()
{
	if (!isLyingDown)
	{
		cout << "The " + breed + " sat.\n";
		isLyingDown = true;
		isSitting = false;
	}
	else
	{
		cout << "The " + breed + " is already sitting.\n";
	}
}