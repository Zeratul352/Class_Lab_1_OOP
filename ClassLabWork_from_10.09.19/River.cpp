#include "pch.h"
#include "River.h"
#include "Sea.h"
#include <iostream>

River::River(const River & r)
{
	name = r.name;
	length = r.length;
	counter++;
}

River::River()
{
	//cout << "constructor " << '\n';
	counter++;
}

River::River(string name1, int length1)
{
	name = name1;
	length = length1;
	//cout << "constructor " << '\n';
	counter++;
}

int River::getLength()
{
	return length;
}

void River::setLength(int a)
{
	length = a;
}

string River::getName()
{
	return name;
}

void River::setName(string b)
{
	name = b;
}



void River::setRiver(string name, int len)
{
	setName(name);
	setLength(len);
	
}

int River::getCount()
{
	return counter;
}


River::~River()
{
	//cout << "Destructor "<<endl;
	counter--;
}
