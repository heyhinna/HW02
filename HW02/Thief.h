// Thief.h

#pragma once

#include "Player.h"

class Thief : public Player
{
public:
	void Attack() override;

	Thief(std::string Nickname);

};

