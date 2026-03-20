// Magician.cpp

#include "Magician.h"

#include <iostream>

void Magician::Attack()
{
	std::cout << "Cast a fireball!" << std::endl;

}

Magician::Magician(std::string Nickname)
	: Player(Nickname)
{
	std::cout << "You have been spawned." << std::endl;

}