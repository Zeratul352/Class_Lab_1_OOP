// ClassLabWork_from_10.09.19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "River.h"
#include "Sea.h"
#include <iostream>

using namespace std;

int River::counter = 0;
int Sea::counter = 0;
int main()
{
	cout << "Enter number of seas" << '\n';
	int number_of_seas;
	cin >> number_of_seas;
	
	vector <Sea> mass;
	for (int i = 0; i < number_of_seas; i++) {
		cout << "enter sea name << size << continent << number of rivers" << '\n';
		string name;
		string continent;
		int size;
		int number;
		cin >> name;
		cin >> size;
		cin >> continent;
		cin >> number;
		mass.push_back(Sea(name, continent, size, number));
		if (mass[i].getNumberOfRivers() > 0) {
			cout << "enter name << length for " << mass[i].getNumberOfRivers() << " rivers" << '\n';
			for (int j = 0; j < mass[i].getNumberOfRivers(); j++) {
				int l;
				string n;
				cin >> n >> l;
				mass[i].setRiver(l, n, j);
			}
		}
	}
	cout << "current number of seas = " << Sea::getCount() << '\n';
	cout << "current number of rivers = " << River::getCount() << '\n';
	cout << "now add an extra river to a continent" << '\n';
	int change;
	while (1) {
		cout << "please enter the number of continent to add a river" << '\n';
		cin >> change;
		if (change < Sea::getCount()) {
			break;
		}
		cout << "wrong number" << '\n';
	}
	int a = mass[change].getNumberOfRivers();
	mass[change].setNumberOfRivers(a + 1);
	int l;
	string n;
	cout << "enter name << length" << '\n';
	cin >> n >> l;
	mass[change].setRiver(l, n, a);
	cout << "current number of seas = " << Sea::getCount() << '\n';
	cout << "current number of rivers = " << River::getCount() << '\n';
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
