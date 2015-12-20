#pragma once
#include "C:\Users\Sam\Documents\SFML-2.3.2\include\SFML\Graphics\Texture.hpp"
#include "C:\Users\Sam\Documents\SFML-2.3.2\include\SFML\Graphics\Sprite.hpp"
#include <iostream>

//	Entity should never be insantiated.
//	Other classes such as Player inherit from Entity.
//	Entity inherits from sf::Sprite, so we can call draw() on it and its children.

class Entity :
	public sf::Sprite
{
public:
	Entity(float x, float y);
	~Entity();
	bool collidesWith(Entity e);
protected:
	float xPos;
	float yPos;
	float prevX;
	float prevY;
	sf::Texture texture;
};

