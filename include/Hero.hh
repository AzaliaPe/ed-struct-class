
#include "Character.hh"

class Hero : public Character
{
    private:
        uint32_t level;
        bool isBad{false};
        std::string* skills;

    public:
        Hero(short int, uint32_t, uint32_t, short int, uint32_t, uint32_t, std::string*);
        ~Hero();
        std::string* GetSkills() const;
        uint32_t GetLevel() const;
};