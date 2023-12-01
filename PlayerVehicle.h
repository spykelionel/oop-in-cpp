#include <string>

namespace RecklessDriver
{
    class PlayerVehicle
    {
        std::string m_name;
        int m_handling;
        int m_strength;
        int m_topSpeed;

    private:
        /* data */
    public:
        PlayerVehicle(const std::string name, int handling, int strength, int topSpeed);
        std::string GetName()
        {
            return m_name;
        }
        int GetHandling() const
        {
            return m_handling;
        }
        int GetTopSpeed() const
        {
            return m_topSpeed;
        }
        int GetStrength() const
        {
            return m_strength;
        }

        // other methods for vehicle movement
        void Up() {}
        void Down() {}
        void Left() {}
        void Right() {}
    };

} // namespace RecklessDriver
