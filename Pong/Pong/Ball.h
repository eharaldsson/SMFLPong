#ifndef BALL_H
#define BALL_H
#include "SFML/Graphics.hpp"


class Ball : public sf::Drawable
{


public:
	Ball();
	~Ball();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:

	sf::CircleShape ball;
	float positionX;
	float positionY;
	float speed;
	float angle;
	
	//speed - konstant
	//position
	//angle


};




#endif // !BALL_H
