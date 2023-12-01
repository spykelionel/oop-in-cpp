#include "Sedan.h"
#include "TrafficCar.h"

namespace ReckclessDriver
{
    Sedan::Sedan(int _damage, float _cash) : TrafficCar(_damage, _cash) {}
    void Sedan::OnCollision(GameObject &other)
    {
        GameObject::OnCollision();
    }
}
