// Archer.cpp

#include "Archer.h"

#include <iostream>

void Archer::Attack()
{
	std::cout << "Shoot an arrow!" << std::endl;

}

Archer::Archer(std::string Nickname)
	: Player(Nickname)
{
	std::cout << "You have been spawned." << std::endl;

}