#include <SFML/Graphics.hpp>
#include <iostream>
#include "Paddel.h"

int main()
{
	Paddel paddel1;
	//Game game;
	//sf::Clock clock;
	sf::RenderWindow window(sf::VideoMode(800, 600), "Pong Game");
	
	// texten ska fadea efter visst antal sekunder


	sf::Font gameFont;
	if (!gameFont.loadFromFile("Flaming.otf"))
	{
		std::cout << "crash" << std::endl;
	}

	sf::Text text;
	text.setString("Pong Game v.1.0");
	text.setFont(gameFont);
	text.setCharacterSize(50);
	text.setStyle(sf::Text::Italic);
	float x = 250;
	float y = 200;
	text.setPosition(x, y);
	

	while (window.isOpen())
	{
		//float dt = clock.restart().asSeconds();
		sf::Event event;
		while (window.pollEvent(event)) //pollevent kollar om ett event körs
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
				
		}

		window.clear();
		window.draw(text);
		window.draw(paddel1);
		window.display();
				
			/*switch (event.type)
			{

			case sf::Event::Closed:
				window.close();
			break;

			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::PageUp)
				{

				}
				if (event.key.code == sf::Keyboard::PageDown)
				{

				}

				break;

			default:
			break;
			*/	
			
				
		}
	
	return 0;
	}
	

	
