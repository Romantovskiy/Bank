#include "pch.h"
#include "Bankk.h"
//#include <iostream>
//#include <string>

//using namespace std;

void Bank::Register()
	{
		string Name;
		int i;
		int nalichieAccounta;  //1, ���� ������� ��� ������, 0 � ��������� ������.
		nalichieAccounta = 0;
		cout << "������� ���� ���:"; cin >> Name;
		for (i = 0; i < kolvoAccountovBanka; i++)
		{
			if ((account[i]->get_Name()) == Name)
			{
				cout << "�� ��� ������������������.\n";
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
	int nalichieAccounta; //1, ���� ������� ��� ������, 0 � ��������� ������.
	nalichieAccounta = 0;
	string Name;
	cout << "������� ���� ���:"; cin >> Name;
	for (i = 0; i < kolvoAccountovBanka; i++)
	{
		if ((account[i]->get_Name()) == Name)
		{
			cout << "����� ����������:"; cin >> money;
			account[i]->set_money(money);

			cout << "��� ������� ����� " << account[i]->get_money() << " ���.";
			nalichieAccounta = 1;
		}
	}
	if (nalichieAccounta == 0)
	{
		cout << "�������� �� ����� ��� �� ����������. ����������, ������� �������� ���.\n";
	}

}

void Bank::Snyatie()
{
	long long money;
	long long i;
	int nalichieAccounta; //1, ���� ������� ��� ������, 0 � ��������� ������.
	nalichieAccounta = 0;
	string Name;
	cout << "������� ���� ���:"; cin >> Name;
	for (i = 0; i < kolvoAccountovBanka; i++)
	{
		if ((account[i]->get_Name()) == Name)
		{
			cout << "����� ������:"; cin >> money;
			if (account[i]->get_money() - money < 0)
			{
				cout << "������������ �������. �� ����� ����� " << account[i]->get_money() << " ���.";
			}
			else
			{
				account[i]->set_money(-money);
				cout << "��� ������� ����� " << account[i]->get_money() << " ���.";
			}
			nalichieAccounta = 1;
		}
	}
	if (nalichieAccounta == 0)
	{
		cout << "�������� �� ����� ��� �� ����������. ����������, ������� �������� ���.\n";
	}
}

Bank::Bank()
{
}

Bank::~Bank()
{
}

