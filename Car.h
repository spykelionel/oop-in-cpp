
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
    static void SwitchOn();
    static void SwitchOff();
    void Accelerate();
    void Brake();
    Car(/* args */);
    ~Car();
};

// #endif //CARABSTRACTION_CAR_H