
#define CARABSTRACTION_CAR_H

#include <string>

/**
 * Car class declaration
 */
class Car
{
    std::string manufacturer;

private:
    float fuel;
    float speed;
    int registrationNum;
    bool isRunnning;

public:
    Car(std::string manu, float fuel, int reg);
    void SwitchOn();
    void SwitchOff();
    void Accelerate();
    void Brake();
    void FillFuel();
    float GetFuel();
    float GetSpeed();
};

// #endif //CARABSTRACTION_CAR_H