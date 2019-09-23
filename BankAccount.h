#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class BankAccount {

private:
	string fname, lname;
	string accountName;
	int accountID;
	int accountNumber;
	double accountBalance;
	int getID();
	void addReward(double amount);
public:
	//Default constructor
	BankAccount();
	//Regular constructor
	BankAccount(string fname, string lname, int accountID, int accountNumber, double accountBalance);
	double getAccountBalance();
	string getAccountName();
	int getAccountNumber();
	void setAccoutBalance(double amount);
	//BankAccount equals(BankAccount other);

	bool withdraw(double amount);
	void deposit(double amount);
	string toString();

};

