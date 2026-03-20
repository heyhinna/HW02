// Player.h

#pragma once

#include <string>

class Player
{
public:
	Player(std::string Nickname);

	virtual void Attack() = 0;

};

