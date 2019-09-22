#pragma once
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;
class River
{
private:
	static int counter;
	string name;
	int length;

public:
	River(const River& r);
	River();
	River(string, int);
	int getLength();
	void setLength(int);
	string getName();
	void setName(string);
	
	void setRiver(string name, int len);
	int static getCount();
	~River();
};

