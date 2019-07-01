#include "pch.h"
#include "Bankk.h"
//#include <iostream>
//#include <string>

//using namespace std;

void Bank::Register()
	{
		string Name;
		int i;
		int nalichieAccounta;  //1, если аккаунт был найден, 0 в противном случае.
		nalichieAccounta = 0;
		cout << "Введите ваше имя:"; cin >> Name;
		for (i = 0; i < kolvoAccountovBanka; i++)
		{
			if ((account[i]->get_Name()) == Name)
			{
				cout << "Вы уже зарегестриррованны.\n";
				nalichieAccounta = 1;
			}
		}
		if (nalichieAccounta == 0)
		{
			account[kolvoAccountovBanka] = new Account();
			account[kolvoAccountovBanka]->set_Name(Name);
			account[kolvoAccountovBanka]->set_money(-account[i]->get_money());
			kolvoAccountovBanka++;

		}

	}

void Bank::Popolnenie()
{
	long long money;
	long long i;
	int nalichieAccounta; //1, если аккаунт был найден, 0 в противном случае.
	nalichieAccounta = 0;
	string Name;
	cout << "Введите ваше имя:"; cin >> Name;
	for (i = 0; i < kolvoAccountovBanka; i++)
	{
		if ((account[i]->get_Name()) == Name)
		{
			cout << "Сумма пополнения:"; cin >> money;
			account[i]->set_money(money);

			cout << "Ваш балланс равен " << account[i]->get_money() << " грн.";
			nalichieAccounta = 1;
		}
	}
	if (nalichieAccounta == 0)
	{
		cout << "Аккаунта на такое имя не существует. Пожалуйста, вначале создайте его.\n";
	}

}

void Bank::Snyatie()
{
	long long money;
	long long i;
	int nalichieAccounta; //1, если аккаунт был найден, 0 в противном случае.
	nalichieAccounta = 0;
	string Name;
	cout << "Введите ваше имя:"; cin >> Name;
	for (i = 0; i < kolvoAccountovBanka; i++)
	{
		if ((account[i]->get_Name()) == Name)
		{
			cout << "Сумма снятия:"; cin >> money;
			if (account[i]->get_money() - money < 0)
			{
				cout << "Недостаточно средств. На вашем счету " << account[i]->get_money() << " грн.";
			}
			else
			{
				account[i]->set_money(-money);
				cout << "Ваш балланс равен " << account[i]->get_money() << " грн.";
			}
			nalichieAccounta = 1;
		}
	}
	if (nalichieAccounta == 0)
	{
		cout << "Аккаунта на такое имя не существует. Пожалуйста, вначале создайте его.\n";
	}
}

Bank::Bank()
{
}

Bank::~Bank()
{
}

