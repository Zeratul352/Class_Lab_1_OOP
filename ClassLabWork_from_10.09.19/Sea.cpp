#include "pch.h"
#include "Sea.h"
#include "River.h"


Sea::Sea()
{
	counter++;
}

Sea::Sea(const Sea & s):continent(s.continent)
{
	size = s.size;
	name = s.name;
	number_of_rivers = s.number_of_rivers;
	arr = s.arr;
	//continent = s.continent;
	counter++;
}

Sea::Sea(string name1, string cont, int size1, int rivers):name(name1), continent(cont), size(size1),number_of_rivers(rivers)
{
	
	for (int i = 0; i < rivers; i++) {
		River a;
		arr.push_back(a);
	}
	counter++;
}

int Sea::getSize()
{
	return size;
}

int Sea::getNumberOfRivers()
{
	return number_of_rivers;
}

const string Sea::getContinent()
{
	return continent;
}

string Sea::getName()
{
	return name;
}

string Sea::getRiverName(int n)
{
	return arr[n].getName();
}

int Sea::getRiverLength(int n)
{
	return arr[n].getLength();
}

void Sea::setSize(int a)
{
	size = a;
}

void Sea::setName(string a)
{
	name = a;
}

void Sea::setNumberOfRivers(int a)
{
	if (number_of_rivers >= a) {
		
		number_of_rivers = a;
	}
	while (number_of_rivers < a) {
		River b;
		arr.push_back(b);
		number_of_rivers++;
		//River::ChangeCount(1);
	}
	
}

void Sea::setRiverName(string n, int number)
{
	arr[number].setName(n);
}

void Sea::setRiverLength(int size, int number)
{
	arr[number].setLength(size);
}

void Sea::setRiver(int size, string name, int number)
{
	arr[number].setRiver(name, size);
}



int Sea::getCount()
{
	return counter;
}


Sea::~Sea()
{
	counter--;
}
