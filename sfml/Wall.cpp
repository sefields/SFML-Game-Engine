#include "Wall.h"

using namespace std;

Wall::Wall(float x, float y) : Entity (x, y)
{
	//	Get and set texture
	if (!texture.loadFromFile("brick.png"))
	{
		cout << "ERROR" << endl;
	}
	setTexture(texture); // Imagine 'self.' at beginning
}


Wall::~Wall()
{
}

void Wall::update(float deltaTime) {

};
