#pragma once
class Pixel
{
public:
	Pixel();
	Pixel(int r, int g, int b);
	
	~Pixel();

	Pixel mix(const Pixel& pisel1);

	int red();
	void setR(int _r);
	int green();
	void setG(int _g);
	int blue();
	void setB(int _b);

private:
	int _r;
	int _g;
	int _b;

};

