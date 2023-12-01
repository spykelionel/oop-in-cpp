#include "GameObject.h"

namespace RecklessDriver
{
    class TrafficCar : public GameObject
    {
        int damaage; // damage it will cause
        float cash;  // use to accumulate the cash

    public:
        int GetDamage() const
        {
            return damaage;
        }
        float GetCash() const
        {
            return cash;
        }
    }
}