#include "cursor.h"

cursor::cursor() {

	icon.loadFromFile("gfx/icon.png");
	setTexture(&icon);

	setSize(sf::Vector2f(48, 48));


}

void cursor::handleInput(float dt) {
	float mousex = input->getMouseX();
	float mousey = input->getMouseY();

	setPosition(mousex-24, mousey-24);

}
