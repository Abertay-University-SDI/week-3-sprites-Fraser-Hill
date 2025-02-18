#include "player.h"
#include <iostream>
using namespace std;

player:: player() {
	setPosition(sf::Vector2f(100, 100)); 
	setSize(sf::Vector2f(100, 100));

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom); 

	setVelocity(0.f, 0.f);

}

player::~player() {

}

void player::handleInput(float dt) {
	//move right
	if (input->isPressed(sf::Keyboard::D)) {
		setVelocity(getVelocity().x + 0.01, getVelocity().y);  
		cout << "D pressed \n";
	}

	//move left
	if (input->isPressed(sf::Keyboard::A)) {
		setVelocity(getVelocity().x - 0.01, getVelocity().y);  
	}

	//move up
	if (input->isPressed(sf::Keyboard::W)) {
		setVelocity(getVelocity().x, getVelocity().y - 0.01);
	}

	//move down
	if (input->isPressed(sf::Keyboard::S)) {
		setVelocity(getVelocity().x, getVelocity().y + 0.01);
	}


}

void player::update(float dt) { 

	move(velocity);
}