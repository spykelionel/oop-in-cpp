#include "PlayerVehicle.h"
#include "GameObject.h"

namespace RecklessDriver
{
    class Player : public GameObject
    {
        int m_health;
        PlayerVehicle *m_vehicle;

    public:
        bool IsAlive();
        void Accelerate();
        void Break();
        void SteerRight();
        void SteerLeft();
        void ApplyDamage();
        Player(/* args */);
    };

} // namespace RecklessDriver
