#include "GameObject.h"

namespace RecklessDriver
{
    class SideObject : public GameObject
    {
    private:
        int damage;
        int cash;
        int count;

    public:
        SideObject();
    };

}