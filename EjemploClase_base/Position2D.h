#pragma once
class Position2D
{
public:
	Position2D();
	Position2D(int x, int y);
	Position2D(const Position2D& pos2);

	~Position2D();

	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	bool operator==(const Position2D& pos2);
	Position2D operator+(const Position2D& pos2);
	Position2D operator-(const Position2D& pos2);

private:
	int _x;
	int _y;

};

