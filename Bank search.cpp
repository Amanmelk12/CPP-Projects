#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Bank {

	string firstName;
	string lastName;
	int accountNum;
	double balance;
};

void GetInfo(Bank info[]) {

	for (int i = 0; i < 3; i++) {

		cout << "Enter First Name: ";
		cin >> info[i].firstName;
		cout << "Enter Last Name: ";
		cin >> info[i].lastName;
		cout << "Enter your Account Number: ";
		cin >> info[i].accountNum;
		cout << "Enter your Balance: ";
		cin >> info[i].balance;
	}

}

void WriteToFile(Bank info[], fstream& file) {

	file.open("file.txt", ios::out);

	file << "Name" << setw(15) << "Account Number" << setw(20) << "Balance" << endl;

	for (int i = 0; i < 3; i++) {

		file << info[i].firstName + info[i].lastName << setw(15) << info[i].accountNum << setw(18) << info[i].balance << endl;
	}

	file.close();

}

void RetriveData(Bank info[], fstream& file) {

	file.open("file.txt", ios::in);

	int accNum;

	cout << "Enter your Account number to be searched: ";
	cin >> accNum;

	cout << "Name" << setw(15) << "Account Number" << setw(23) << "Balance" << endl;

	string line;

	getline(file, line);

	for (int i = 0; i < 3; i++) {

		getline(file, line);

		if (info[i].accountNum == accNum) {

			cout << line;
		}

	}

	file.close();

}


int main() {

	fstream file;

	Bank info[3];

	GetInfo(info);

	WriteToFile(info, file);

	RetriveData(info, file);

}