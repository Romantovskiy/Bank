#include "pch.h"
#include "Bankk.h"
//#include <iostream>
//#include <string>

//using namespace std;


void Bank::Register()
	{
		string Name;
		int i;
		int flag;  //1, если аккаунт был найден, 0 в противном случае.
		flag = 0;
		cout << "Введите ваше имя:"; cin >> Name;
		for (i = 0; i < kolvo; i++)
		{
			if ((a[i]->get_Name()) == Name)
			{
				cout << "Вы уже зарегестриррованны.\n";
				flag = 1;
			}
		}
		if (flag == 0)
		{
			a[kolvo] = new Account();
			a[kolvo]->set_Name(Name);
			a[kolvo]->set_money(-a[i]->get_money());
			kolvo++;

		}

	}

void Bank::Popolnenie(int flag) //flag = 1, если пополняют счет, и равен -1, если снимают.
{
	long long money;
	long long i;
	int flagS; //1, если аккаунт был найден, 0 в противном случае.
	flagS = 0;
	string Name;
	cout << "Введите ваше имя:"; cin >> Name;
	for (i = 0; i < kolvo; i++)
	{
		if ((a[i]->get_Name()) == Name)
		{
			if (flag == 1)
			{
				cout << "Сумма пополнения:"; cin >> money;
				a[i]->set_money(money);
			}
			else
			{
				cout << "Сумма снятия:"; cin >> money;
				if (a[i]->get_money() - money < 0)
				{
					cout << "Недостаточно средств. На вашем счету " << a[i]->get_money() << " грн.";
				}
				else
				{
					a[i]->set_money(-money);
				}
			}

			cout << "Ваш балланс равен " << a[i]->get_money() << " грн.";
			flagS = 1;
		}
	}
	if (flagS == 0)
	{
		cout << "Аккаунта на такое имя не существует. Пожалуйста, вначале создайте его.\n";
	}

}

Bank::Bank()
{/*
	Register(); {
		string Name;
		int i;
		int flag;  //1, если аккаунт был найден, 0 в противном случае.
		flag = 0;
		cout << "Введите ваше имя:"; cin >> Name;
		for (i = 0; i < kolvo; i++)
		{
			if ((a[i]->Name) == Name)
			{
				cout << "Вы уже зарегестриррованны.\n";
				flag = 1;
			}
		}
		if (flag == 0)
		{
			a[kolvo] = new Account(Name);
			a[kolvo]->Name = Name;
			a[kolvo]->money = 0;
			kolvo++;

		}

	}*/
}


Bank::~Bank()
{
}

