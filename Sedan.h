#include "TrafficCar.h"
#include "GameObject.h"

namespace RecklessDriver
{
    class Sedan : public TrafficCar
    {
    public:
        Sedan(int _damage, float _cash);

        void OnCollision(GameObject &other) override;
    }

}