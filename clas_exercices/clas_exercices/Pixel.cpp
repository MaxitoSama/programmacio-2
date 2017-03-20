#include "Pixel.h"



Pixel::Pixel():_r(0),_g(0),_b(0)
{
}

Pixel::Pixel(int r, int g, int b)
{
	_r = r;
	_g = g;
	_b = b;
}

Pixel::~Pixel()
{
}

int Pixel::red()
{
	return _r;
}
void Pixel::setR(int _r)
{
	this->_r = _r;
}
int Pixel::green()
{
	return _g;
}
void Pixel::setG(int _g)
{
	this->_g = _g;
}
int Pixel::blue()
{
	return _b;
}
void Pixel::setB(int _b)
{
	this->_b = _b;
}

Pixel Pixel::mix(const Pixel& pisel1)
{
	Pixel result;

	result._r = (pisel1._r +_r) / 2;
	result._g = (pisel1._g +_g) / 2;
	result._b = (pisel1._b +_b) / 2;

	return result;
}