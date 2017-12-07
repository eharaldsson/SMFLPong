#ifndef PADDEL_H
#define PADDEL_H
#include "SFML/Graphics.hpp"

class Paddel : public sf::Drawable
{

public:

	Paddel();
	~Paddel();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:

	sf::RectangleShape paddel;
	float positionY;
	float fixedPositionX;
	


};





#endif