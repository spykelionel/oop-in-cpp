
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

public:
    Car(std::string manu, float fuel, int reg);
    void SwitchOn();
    void SwitchOff();
    void Accelerate();
    void Brake();
    bool isRunnning;
};

// #endif //CARABSTRACTION_CAR_H