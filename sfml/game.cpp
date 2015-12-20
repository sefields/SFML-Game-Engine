#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Wall.h"

using namespace std;

int main() {

	//Declare a variable window
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");

	//Set framerate limit
	window.setFramerateLimit(60);

	//Disable pesky crap
	window.setKeyRepeatEnabled(false);

	//Declare our clock
	sf::Clock clock;

	//Declare a player
	Player hello(300.f, 300.f);

	//Declare a wall
	Wall goodbye(300.f, 450.f);

	std:vector<Wall> walls;
	walls.push_back(goodbye);


	//WHILE THE WINDOW IS OPEN
	while (window.isOpen()) {
		
		//	GET TIME
		float deltaTime = clock.restart().asSeconds();

		//	GET EVENT
		sf::Event event;

		//	WHILE EVENTS ARE POLLED
		while (window.pollEvent(event)) {
			//	THEY CAN CLOSE THE GAME
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//Update everythang
		hello.update(deltaTime, walls);
		window.clear();
		window.draw(hello);
		window.draw(goodbye);
		window.display();
	}

}