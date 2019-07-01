#include "pch.h"
#include "Account.h"
//#include <iostream>
//#include <string>

//using namespace std;

long long Account::get_money() 
{
	return money;
}

string Account::get_Name()
{
	return Name;
}

void Account::set_money(long long X) // Добавляет аргумент функции
{
	money += X;
}

void Account::set_Name(string X) // Заменяет "Name" на аргумент функции.
{
	Name = X;
}

Account::Account()
{
}


Account::~Account()
{
}
