// main.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "BankAccount.h"


using std::cout;
void fillArray(ifstream& input, BankAccount accountsArray[]);
void printArray(BankAccount accountsArray[]);
const int SIZE = 8;

int main()
{
	string accountName;
	string fname;
	string lname;
	
	BankAccount accountsArray[SIZE];
	
	string line;
	
	int i = 0;
	int number = 0;
	ifstream inputFile;
	
	fillArray(inputFile, accountsArray);
	printArray(accountsArray);
}

void fillArray(ifstream& input, BankAccount accountsArray[]) {
	string line;
	int count = 0;
	string fname, lname;
	int accountID;
	int accountNumber;
	double accountBalance;
	if (!input) {
		cout << "error" << endl;
	}
	else {
		while (getline(input, line) && count <= SIZE) {
			stringstream instream(line);
			instream >> fname >> lname >> accountID >> accountNumber >> accountBalance;
			accountsArray[count] = BankAccount(fname,lname, accountID, accountNumber, accountBalance);
		}
	}

}

void printArray(BankAccount accountsArray[]) {
	cout << " FAVORITE BANK - CUSTOMER DETAILS " << endl;
	cout << " --------------------------------" << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		
		cout << accountsArray[i].toString() << endl;

	}
	cout << endl;

}