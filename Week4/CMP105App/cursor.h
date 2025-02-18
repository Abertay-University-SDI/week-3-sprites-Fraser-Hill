#pragma once
#include "Framework/GameObject.h"
class cursor : public GameObject
{
public: 
	cursor();

	void handleInput(float dt) override;
	 
	sf::Texture icon;

};

