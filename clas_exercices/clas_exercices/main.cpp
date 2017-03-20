#include <iostream>

using namespace std;
#include "Pixel.h"

int main() {

	Pixel blue(0, 0, 255), black;
	Pixel red(255, 0, 0);
	Pixel m;

	m = red.mix(blue);
	cout << black.red() << " " << black.green() << " " << black.blue() << endl;
	cout << m.red() << " " << m.green() << " " << m.blue() << endl;
	
	getchar();
	getchar();

	return 0;
}