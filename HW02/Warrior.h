// Warrior.h

#pragma once

#include "Player.h"

class Warrior : public Player
{
public:
	void Attack() override;

	Warrior(std::string Nickname);

};

