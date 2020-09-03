#include<iostream>
#include "Character.hh"

int main()
{
    Character* character1{new Character(5, 3, 1, 2, 3)};
    std::cout << "Character info:" << std::endl;
    std::cout << "Health: " << character1->GetHealth() << std::endl;
    std::cout << "Exp: " << character1->GetExp() << std::endl;
    std::cout << "Luck:" << character1->GetLuck() << std::endl;
    std::cout << "Speed: " << character1->GetSpeed() << std::endl;
    std::cout << "Streght: " << character1->GetStrenght() << std::endl;
    character1->SetLore("la chinita en el bosque se perdio");
    character1->GetDamage(2);
    std::cout << "Health: " << character1->GetHealth() << std::endl;
    std::cout << "Lore: : " << character1->GetLore() << std::endl;
    delete &character1;

    std::cin.get();
    return 0;
}