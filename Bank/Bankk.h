#pragma once
#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

class Bank
{
public:
	Account* a[1000];
	int kolvo;
	Bank();
	~Bank();

	void Register();
	void Popolnenie(int flag);

private:

};

