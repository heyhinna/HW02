// Main.cpp

#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"

int main()
{


	Player* player = nullptr;


	std::string Nickname;
	int UserSelect;

	std::cout << "Write your name." << std::endl;

	std::cin >> Nickname;

	std::cout << "Welcome, " << Nickname << ". " << "Choose your class." << std::endl
		<< "1. Warrior 2. Magician 3. Thief 4. Archer" << std::endl;


	std::cin >> UserSelect;


	switch (UserSelect)
	{
	case 1:
		player = new Warrior(Nickname);
		break;

	case 2:
		player = new Magician(Nickname);
		break;

	case 3:
		player = new Thief(Nickname);
		break;

	case 4:
		player = new Archer(Nickname);
		break;

	default:
		std::cout << "You should choose among 1~4." << std::endl;
		return 1;
	}

	return 0;
}