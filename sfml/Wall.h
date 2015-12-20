#pragma once
#include "Entity.h"

class Wall :
	public Entity
{
public:
	Wall(float x, float y);
	~Wall();
	void update(float deltaTime);
};

