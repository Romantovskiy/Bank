#pragma once
#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

class Bank
{
public:
	Account* account[1000];
	int kolvoAccountovBanka;
	Bank();
	~Bank();

	void Register();
	void Popolnenie();
	void Snyatie();

private:

};

