#include "Position2D.h"



Position2D::Position2D():_x(0),_y(0)
{

}
Position2D::Position2D(int x,int y): _x(x), _y(y)
{

}
Position2D::Position2D(const Position2D& pos2):_x(pos2._x),_y(pos2._y)
{

}

Position2D::~Position2D()
{

}

int Position2D::getX()
{
	return _x;
}
void Position2D::setX(int _x)
{
	this->_x = _x;
}
int Position2D::getY()
{
	return _y;
}
void Position2D::setY(int _y)
{
	this->_y = _y;
}
bool Position2D::operator==(const Position2D& pos2)
{
	bool result = false;
	if (_x == pos2._x &&_y == pos2._y)
	{
		result = true;
	}
	return result;
}
Position2D Position2D::operator+(const Position2D& pos2)
{
	Position2D result;

	result._x = _x+pos2._x;
	result._y = _y + pos2._y;
	return result;
}
Position2D Position2D::operator-(const Position2D& pos2)
{
	Position2D result;

	result._x = _x - pos2._x;
	result._y = _y - pos2._y;
	return result;
}