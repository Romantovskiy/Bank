#include "pch.h"
#include "Bankk.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	long long money, vibor;
	string Name;
	setlocale(LC_CTYPE, "rus");
	vibor = 1; // Выбор клиента: 1 - Создать аккаунт; 2 - Пополнить; 3 - Снять.
	Bank* x = new Bank;
	x->kolvoAccountovBanka = 0;
	while (vibor == 1)
	{
		cout << "Выбирите одно из действий:\n1 - Создать аккаунт\n2 - Пополнить\n3 - Снять\n";
		cin >> vibor;

		if (vibor == 1)
		{
			x->Register();
		}
		if (vibor == 2)
		{
			x->Popolnenie();
		}
		if (vibor == 3)
		{
			x->Snyatie();
		}
		cout << "Продолжить работу с банком?\nВыбирите одно из действий:\n1 - Да\n2 - Нет\n";
		cin >> vibor;
	}
	return 0;
}