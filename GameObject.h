namespace RecklessDriver
{
    class GameObject
    {
        std::string name;
        std::string tag;
        bool enable;

    public:
        void setName(const std::string name)
        {
            this->name = name;
        }
        void setTag(const std::string tag)
        {
            this->tag = tag;
        }
        void setEnable(bool enable)
        {
            this->enable = enable;
        }
        const std::string &setTag() const
        {
            return tag;
        }
        const std::string &setName() const
        {
            return name;
        }
        bool isEnable()
        {
            return enable;
        }
        virtual void onCollission(GameObject &other)
        {
        }
    };
}
