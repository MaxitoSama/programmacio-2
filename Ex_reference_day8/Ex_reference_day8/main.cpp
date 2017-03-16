#include <iostream>

using namespace std;

struct Pirate {
	char name[69];
	int life;
};

struct Weapon {
	char name[69];
	int damage;
};

void printPirateInfo(const Pirate &pipi)
{
	cout << "--Pirate--" << endl;
	cout << "name: " << pipi.name << endl;
	cout << "life units: " << pipi.life << endl;
}

void printWeaponInfo(const Weapon &pumpum)
{
	cout << "--Weapon--" << endl;
	cout << "name: " << pumpum.name << endl;
	cout << "damage points: " << pumpum.damage << endl;
}

void attack(Pirate *pipi, const Weapon pumpum)
{
	pipi->life -= pumpum.damage;

}


int main()
{
	Pirate pipi = { "leChuck",100 };
	Weapon pumpum = { "Sword",10 };

	printPirateInfo(pipi);
	printWeaponInfo(pumpum);
	attack(&pipi, pumpum);
	printPirateInfo(pipi);

	getchar();
	getchar();
	return 0;
}