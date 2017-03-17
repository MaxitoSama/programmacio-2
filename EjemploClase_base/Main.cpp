#include <iostream>
using namespace std;

//#include "Player.h"
#include "Position2D.h"

int main()
{
	Position2D mPos(100,200);
	Position2D mPos2(mPos);

	Position2D mPos3 = mPos + mPos2;

	cout << mPos3.getX() << endl;
	cout << mPos3.getY() << endl;

    system("pause");

    return 0;
}