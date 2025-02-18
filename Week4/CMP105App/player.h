#pragma once
#include "Framework/GameObject.h"
class player : public GameObject
{
public:
	player();
	~player();

	void handleInput(float dt);
	void update(float dt);

	sf::Texture mushroom;
	Input in;
};

