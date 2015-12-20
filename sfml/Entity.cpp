#include "Entity.h"

using namespace std;

Entity::Entity(float x, float y)
{
	//	Set position
	xPos = x;
	yPos = y;
	setPosition(x, y); // ^^
}


Entity::~Entity()
{
}

//	This function tests whether this entity is colliding with the other entity, e.
//	If it is, 'true' is returned. Otherwise 'false' is returned.
bool Entity::collidesWith(Entity e) {
	return getGlobalBounds().intersects(e.getGlobalBounds());
}
