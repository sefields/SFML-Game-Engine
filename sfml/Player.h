#pragma once
#include "Entity.h"
#include "Wall.h"
#include "C:\Users\Sam\Documents\SFML-2.3.2\include\SFML\Graphics\Texture.hpp"
#include "C:\Users\Sam\Documents\SFML-2.3.2\include\SFML\Graphics\Sprite.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Player :
	public Entity
{
private:
	bool movingLeft;
	bool movingRight;
	bool movingUp;
	bool movingDown;
	//Velocity
	float maxVel;
	float vel;
	float incrementVel;
	//Gravity
	float fallRate;
	float gravity;
	bool onGround;
public:
	Player(float x, float y);
	~Player();
	void update(float deltaTime, std::vector<Wall> walls);
};

