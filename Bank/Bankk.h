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
		int flag;  //1, ���� ������� ��� ������, 0 � ��������� ������.
		flag = 0;
		cout << "������� ���� ���:"; cin >> Name;
		for (i = 0; i < kolvo; i++)
		{
			if ((a[i]->Name) == Name)
			{
				cout << "�� ��� ������������������.\n";
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
		int flagS; //1, ���� ������� ��� ������, 0 � ��������� ������.
		flagS = 0;
		string Name;
		cout << "������� ���� ���:"; cin >> Name;
		for (i = 0; i < kolvo; i++) 
		{
			if ((a[i]->Name) == Name)
			{
				if (flag == 1)
				{
					cout << "����� ����������:"; cin >> money;
					a[i]->money += money;
				}
				else
				{
					cout << "����� ������:"; cin >> money;
					if (a[i]->money - money < 0)
					{
						cout << "������������ �������. �� ����� ����� " << a[i]->money << " ���.";
					}
					else
					{
						a[i]->money -= money;
					}
				}

				cout << "��� ������� ����� " << a[i]->money << " ���.";
				flagS = 1;
			}
		}
		if (flagS == 0)
		{
			cout << "�������� �� ����� ��� �� ����������. ����������, ������� �������� ���.\n";
		}

	}
private:

};

