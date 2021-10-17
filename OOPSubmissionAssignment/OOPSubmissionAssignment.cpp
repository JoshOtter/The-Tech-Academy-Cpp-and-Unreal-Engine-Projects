#include <iostream>
#include "Dog.h"

int main()
{
    Dog dog1("Black Lab", "Black", 2.0, 60);
    Dog dog2("Border Collie", "Black and White", 1.5, 40);
    dog1.Shake();
    dog1.Shake();
    dog1.Sit();
    dog1.LayDown();
    dog1.LayDown();
    dog2.LayDown();
    dog2.Sit();
    dog2.Sit();
}