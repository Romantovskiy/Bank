#include "pch.h"
#include "Bankk.h"
#include <iostream>
#include <string>
//#define ROUND cout<<"\n--------------\n";main;
using namespace std;


int main() {
	long long money, vibor;
	string Name;

	setlocale(LC_CTYPE, "rus");
	vibor = 1;
	Bank* x = new Bank;
	x->kolvo = 0;
	while (vibor == 1)
	{
		cout << "Выбирите одно из действий:\n1 - Создать\n2 - Пополнить\n3 - Снять\n";
		cin >> vibor;

		if (vibor == 1)
		{
			x->Register();
		}
		if (vibor == 2)
		{
			x->Popolnenie(1);
		}
		if (vibor == 3)
		{
			x->Popolnenie(-1);
		}
		cout << "Продолжить работу с банком?\nВыбирите одно из действий:\n1 - Да\n2 - Нет\n";
		cin >> vibor;
	}
	return 0;
}