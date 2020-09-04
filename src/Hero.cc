#include "Hero.hh"

Hero::Hero(short int health, uint32_t strength, uint32_t exp, short int luck, uint32_t speed)
:Character(health, strength, exp, luck, speed)
{
    std::cout << GetHealth() << std::endl;
}