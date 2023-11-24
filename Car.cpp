#include "Car.h"
#include <iostream>

void Car::SwitchOn()
{
    std::cout << "Car is switch on" << std::endl;
}

void Car::SwitchOff()
{
    std::cout << "Car is switch off" << std::endl;
}

void Car::Accelerate()
{
    std::cout << "Car is accelerating" << std::endl;
}
void Car::Brake()
{
}

void Car::FillFuel(float amount)
{
}

float Car::GetFuel()
{
}

float Car::GetSpeed()
{
}

Car::Car(std::string manuf, float fuel, int reg) : manufacturer(manuf), registrationNum(reg)
{
    this->fuel = fuel;
    speed = 0;
}