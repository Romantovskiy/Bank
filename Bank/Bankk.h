#pragma once
#include <string>
#include <iostream>
using namespace std;

class Account
{
public:
	Account(string Name);
	~Account();
	string Name;
	long long money;
private:

};


class Bank
{
public:
	Account* a[1000];
	int kolvo;
	Bank();
	~Bank();
	void Register() {
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

	}

	void Popolnenie(int flag)
	{
		long long money;
		long long i;
		int flagS; //1, если аккаунт был найден, 0 в противном случае.
		flagS = 0;
		string Name;
		cout << "Введите ваше имя:"; cin >> Name;
		for (i = 0; i < kolvo; i++) 
		{
			if ((a[i]->Name) == Name)
			{
				if (flag == 1)
				{
					cout << "Сумма пополнения:"; cin >> money;
					a[i]->money += money;
				}
				else
				{
					cout << "Сумма снятия:"; cin >> money;
					if (a[i]->money - money < 0)
					{
						cout << "Недостаточно средств. На вашем счету " << a[i]->money << " грн.";
					}
					else
					{
						a[i]->money -= money;
					}
				}

				cout << "Ваш балланс равен " << a[i]->money << " грн.";
				flagS = 1;
			}
		}
		if (flagS == 0)
		{
			cout << "Аккаунта на такое имя не существует. Пожалуйста, вначале создайте его.\n";
		}

	}
private:

};

