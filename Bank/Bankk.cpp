#include "pch.h"
#include "Bankk.h"
//#include <iostream>
//#include <string>

//using namespace std;


void Bank::Register()
	{
		string Name;
		int i;
		int flag;  //1, ���� ������� ��� ������, 0 � ��������� ������.
		flag = 0;
		cout << "������� ���� ���:"; cin >> Name;
		for (i = 0; i < kolvo; i++)
		{
			if ((a[i]->get_Name()) == Name)
			{
				cout << "�� ��� ������������������.\n";
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

void Bank::Popolnenie(int flag) //flag = 1, ���� ��������� ����, � ����� -1, ���� �������.
{
	long long money;
	long long i;
	int flagS; //1, ���� ������� ��� ������, 0 � ��������� ������.
	flagS = 0;
	string Name;
	cout << "������� ���� ���:"; cin >> Name;
	for (i = 0; i < kolvo; i++)
	{
		if ((a[i]->get_Name()) == Name)
		{
			if (flag == 1)
			{
				cout << "����� ����������:"; cin >> money;
				a[i]->set_money(money);
			}
			else
			{
				cout << "����� ������:"; cin >> money;
				if (a[i]->get_money() - money < 0)
				{
					cout << "������������ �������. �� ����� ����� " << a[i]->get_money() << " ���.";
				}
				else
				{
					a[i]->set_money(-money);
				}
			}

			cout << "��� ������� ����� " << a[i]->get_money() << " ���.";
			flagS = 1;
		}
	}
	if (flagS == 0)
	{
		cout << "�������� �� ����� ��� �� ����������. ����������, ������� �������� ���.\n";
	}

}

Bank::Bank()
{/*
	Register(); {
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

	}*/
}


Bank::~Bank()
{
}

