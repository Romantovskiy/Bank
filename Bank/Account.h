#pragma once
#include <string>
#include <iostream>
using namespace std;

class Account
{
public:
	Account();
	~Account();
	long long get_money();

	string get_Name();

	void set_money(long long X);

	void set_Name(string X);

private:
	string Name;
	long long money;
};
