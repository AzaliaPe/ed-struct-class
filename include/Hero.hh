
#include "Character.hh"

class Hero : public Character
{
    private:
    
    public:
        Hero(short int health, uint32_t strength, uint32_t exp, short int luck, uint32_t speed);
        ~Hero();
};