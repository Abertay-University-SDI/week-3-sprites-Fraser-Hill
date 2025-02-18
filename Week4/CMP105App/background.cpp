#include "background.h"

background::background() {
	bg.loadFromFile("gfx/Level1_1.png");
	setTexture(&bg);

	setSize(sf::Vector2f(11038, 675));
}
void background::setWindow(sf::RenderWindow* wind) {
	window = wind;
}

void background::handleInput(float dt) {
	sf::View v = window->getView(); 
	if (input->isKeyDown(sf::Keyboard::Space)) {
		v.setCenter(v.getCenter().x + 5, v.getCenter().y);
	}
	window->setView(v); 
}

