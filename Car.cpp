#include "Car.h"
#include <iostream>

void Car::SwitchOn()
{
    printMessage("Car is Switch on");
}

void Car::SwitchOff()
{
    printMessage("Car is Switch off");
}

void Car::Accelerate()
{
    printMessage("Car is accelerating");
}

void Car::Brake()
{
}

void printMessage(std::string message)
{
    std::cout << message << std::endl;
}