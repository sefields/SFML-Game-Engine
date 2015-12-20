#include "Player.h"
#include "Wall.h"
#include <iostream>
#include <vector>


using namespace std;

Player::Player(float x, float y) : Entity (x, y)
{
	//	Get and set texture
	if (!texture.loadFromFile("soldierForward1.png"))
	{
		cout << "ERROR" << endl;
	}
	setTexture(texture); // Imagine 'self.' at beginning
	vel = 100.f;
}


Player::~Player()
{
}

void Player::update(float deltaTime, vector<Wall> walls) {

	//	DETECT KEYBOARD
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		movingLeft = true;
	}
	else movingLeft = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		movingRight = true;
	}
	else movingRight = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		movingUp = true;
	}
	else movingUp = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		movingDown = true;
	}
	else movingDown = false;

	//Gravity


	//	Store xPos and yPos
	prevX = xPos;
	prevY = yPos;


	//	Update xPos and yPos
	if (movingRight == true) {
		xPos += vel * deltaTime;
	}
	if (movingLeft == true) {
		xPos -= vel * deltaTime;
	}
	if (movingUp == true) {
		yPos -= vel * deltaTime;
	}
	if (movingDown == true) {
		yPos += vel * deltaTime;
	}

	//	Update the position
	setPosition(xPos, yPos);


	//Am I colliding with something?
	for (std::vector<Wall>::iterator it = walls.begin(); it != walls.end(); ++it) {
		if (collidesWith(*it)) {
			//	If so, reset position to those older values
			xPos = prevX;
			yPos = prevY;
			setPosition(xPos, yPos);
		}
		//Apply gravity
		else {


		}
	}

}
