#include "pch.h"
#include "Account.h"
//#include <iostream>
//#include <string>

//using namespace std;

Account::Account()
{
}


Account::~Account()
{
}

long long Account::get_money()
{
	return money;
}

string Account::get_Name()
{
	return Name;
}

void Account::set_money(long long X)
{
	money += X;
}

void Account::set_Name(string X)
{
	Name = X;
}
