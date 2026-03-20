// Magician.h

#pragma once

#include "Player.h"

class Magician : public Player
{
public:
	void Attack() override;

	Magician(std::string Nickname);

};

