#include "Ball.h"

Ball::Ball()
{

	sf::CircleShape Ball(10.f);
	Ball.setFillColor(sf::Color::White);
	Ball.getLocalBounds();
	
}

Ball::~Ball()
{
}

void Ball::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
}
