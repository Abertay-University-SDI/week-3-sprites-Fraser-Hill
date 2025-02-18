#pragma once
#include "player.h"


class enemy : public player
{
public:
	enemy();
	void update(float dt);
	void setWindow(sf::RenderWindow* win);

	sf::Texture goomba;
	sf::RenderWindow* window;

};

