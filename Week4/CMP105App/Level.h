#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "player.h"
#include "enemy.h"
#include "background.h"

class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

	player p;
	enemy e;
	background bg;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;

};