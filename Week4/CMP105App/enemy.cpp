#include "enemy.h"

enemy::enemy() {

	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);

	setVelocity(0.f, 2.f);
}

void enemy::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void enemy::update(float dt) {
	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y) {

		setVelocity(0.f, -2.f); 
	}
	if (getVelocity().y < 0 && getPosition().y < 0) {

		setVelocity(0.f, 2.f);
	}

	move(velocity);
}