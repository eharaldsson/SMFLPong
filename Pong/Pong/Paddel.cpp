#include "Paddel.h"

Paddel::Paddel()
{
	paddel.setSize(sf::Vector2f(20. - 10, 20. - 10));
	paddel.setFillColor(sf::Color::Green);
	paddel.setPosition(750, 300);
}

Paddel::~Paddel()
{
}

void Paddel::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(paddel, states);
}
