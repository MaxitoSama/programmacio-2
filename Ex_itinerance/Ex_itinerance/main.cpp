#include <iostream>
#include <cstdio>

using namespace std;

class Building
{
protected:
	char name[69];

public:
	Building(const char *pname)
	{
		sprintf(name, pname);
	}

	const char *getName() const
	{
		return name;
	}
};

class Warehouse :public Building
{
public:
	Warehouse(const char* pname, int prock, int pwood,int pwheat):Building(pname)
	{
		wood = pwood;
		rocks = prock;
		wheat = pwheat;

	}

	void printResources()const
	{
		cout << getName() << endl;
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "wheat: " << wheat << endl;
	}
private:

	int rocks, wood, wheat;
};

class House : public Building
{
public:
	House(char *pname, int pfloors, int pinhabitants, int pservants) :Building(pname)
	{
		floors = pfloors;
		inhabitants = pinhabitants;
		servants = pservants;
	}
	
	void printHouse()
	{
		cout << getName() << endl;
		cout << "Floors: " << floors << endl;
		cout << "Inhabitants: " << inhabitants << endl;
		cout << "Servants: " << servants << endl;
	}

private:
	int floors, inhabitants, servants;
};

class Temple : public Building
{
public:
	Temple(char *pname, char* pgod, int ppriest) :Building(pname)
	{
		priest = ppriest;
		sprintf(god, pgod);
	}
	void printTemple()
	{
		cout << getName() << endl;
		cout << "God: " << god << endl;
		cout << "Priest: " << priest << endl;
	}
private:
	char god[69];
	int priest;
};

int main()
{
	Warehouse ware1("East Warehouse", 10, 20, 30);
	House house1("El Puti", 2, 5, 10);
	Temple temple1("Mercury's Temple", "Mercury", 3);

	ware1.printResources();
	cout << endl;
	house1.printHouse();
	cout << endl;
	temple1.printTemple();

	system("pause");
	return 0;
}