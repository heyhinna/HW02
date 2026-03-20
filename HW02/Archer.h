// Archer.h

#pragma once

#include "Player.h"

class Archer : public Player
{
public:
	void Attack() override;

	Archer(std::string Nickname);

};

