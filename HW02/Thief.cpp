// Thief.cpp

#include "Thief.h"

#include <iostream>

void Thief::Attack()
{
	std::cout << "Stab a dagger!" << std::endl;

}

Thief::Thief(std::string Nickname)
	: Player(Nickname)
{
	std::cout << "You have been spawned." << std::endl;

}