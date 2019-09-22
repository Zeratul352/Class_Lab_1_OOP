#pragma once
#include <cstdio>
#include <cstring>
#include <string>
#include "River.h"
#include <vector>
using namespace std;
class Sea
{
private:
	static int counter;
	string name;
	int size;
	const string continent;
	int number_of_rivers;
	vector <River> arr;
public:
	Sea();
	Sea(const Sea& s);
	Sea(string name1, string cont, int size1, int rivers);
	int getSize();
	int getNumberOfRivers();
	const string getContinent();
	string getName();
	string getRiverName(int n);
	int getRiverLength(int n);
	void setSize(int a);
	void setName(string a);
	void setNumberOfRivers(int a);
	void setRiverName(string n, int number);
	void setRiverLength(int size, int number);
	void setRiver(int size, string name, int number);
	
	int static getCount();
	~Sea();
};

