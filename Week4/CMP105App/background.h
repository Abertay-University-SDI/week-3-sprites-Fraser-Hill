#pragma once
#include "Framework/GameObject.h"

class background : public GameObject
{
public: 
	background();

	void handleInput(float dt);
	void setWindow(sf::RenderWindow* wind);

	sf::Texture bg;
	sf::RenderWindow* window;
	Input* in;
};

