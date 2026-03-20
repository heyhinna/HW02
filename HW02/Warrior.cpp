// Warrior.cpp

#include "Warrior.h"

#include <iostream>

void Warrior::Attack()
{
	std::cout << "Swing a sword!" << std::endl;

}

Warrior::Warrior(std::string Nickname) 
	: Player(Nickname)
{
	std::cout << "You have been spawned." << std::endl;

}