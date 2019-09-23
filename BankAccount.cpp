#include <iostream>
#include <sstream>
#include "BankAccount.h"
using namespace std;

double minBalance = 9.99;
double rewardsAmount = 1000.00;
double rewardsRate = 0.04;

BankAccount::BankAccount() {
	accountName = "";
	accountBalance = 0;
	accountNumber = 0;
	accountID = 0;
	fname = "";
	lname = "";
};

BankAccount::BankAccount(string fname, string lname, int accountID, int accountNumber, double accountBalance) {
	this->accountBalance = accountBalance;
	this->accountID = accountID;
	this->accountNumber = accountNumber;
	this->accountName = accountName;
	this->fname = fname;
	this->lname = lname;

};

double BankAccount::getAccountBalance() {
	return accountBalance;
}

string BankAccount::getAccountName() {
	return accountName;
}

int BankAccount::getAccountNumber() {
	return accountNumber;
}

void BankAccount::setAccoutBalance(double amount) {
	amount += accountBalance;
}

bool BankAccount::withdraw(double amount) {
	if (accountBalance - amount <= minBalance) {
		return false;
	}
	else {
		accountBalance -= amount;
		return true;
	}
}

void BankAccount::deposit(double amount) {
	accountBalance += amount;
	if (amount > rewardsAmount) {
		addReward(amount);
	}
}

void BankAccount::addReward(double amount) {
	accountBalance += (rewardsRate * amount);
}

string BankAccount::toString() {

	return "Account Name: " + fname +" "+ lname +"\n" + "Account Number: " + to_string(accountNumber) + "\n" + "Account Balance: " + to_string(accountBalance) + "\n\n";

}


int BankAccount::getID() {
	return accountID;

}


//BankAccount BankAccount::equals() {
//
//}