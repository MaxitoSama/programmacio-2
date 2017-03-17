/*#include "Player.h"

Player::Player():_maxscore(0), _posX(0), _posY(0)//the variables are initialised to 0
{
	name = new char[2]; //example memory allocation inside the class
	name[0] = 'a';
	name[1] = '\0';
    _alive = false; 
    //_posX = 0; initialised in the name class
    //_posY = 0;
	
}

Player::Player(int posX, int posY):_maxscore(0) //definition of the constructor with parameters
{
	name = new char[2];
	name[0] = 'a';
	name[1] = '\0';
	_alive = false;
	_posX = posX;
	_posY = posY;
}
Player::Player(const Player& player2):_maxscore(0) //definition of the constructor with a class inside
{
	name = new char[2];
	name[0] = 'a';
	name[1] = '\0';
	_alive = player2._alive;
	_posX = player2._posX;//to access to the information of a class inside a class we have to use the same method as structs
	_posY = player2._posY;
}

Player::~Player()//destruct all the memory that we create inside the constructor
{
	delete[] name; 
}

void Player::setPosition(int pX, int pY)
{
	this->_posX = pX; //this means that we eant to enter inside the content of the variable posX defined with the same name outside the class
	this->_posY = pY;
}

int Player::getXPosition()const //now we can't modify the values inside this function
{
    return _posX;
}

int Player::getYPosition()
{
    return _posY;
}

bool Player::isAlive()
{
    return _alive;
}
bool Player::operator==(const Player& player2)
{
	return _posX == player2._posX;
}
*/