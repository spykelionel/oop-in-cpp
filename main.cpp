#include "Car.h"
#include <iostream>

int main()
{
    std::cout << "Hello Car race!!!" << std::endl;
    Car car("Toyota", 11, 1232);
    car.GetSpeed();
    // Car::SwitchOn();
    // Car::SwitchOff();
    return 0;
}