#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct PersonalInfo {

	int id;
	char sex;
	double hourlyWage;
	int noOfYears;
	int hours;

};

void getInfo(PersonalInfo info[], int size) {

	for (int i = 0; i < size; i++) {

		cout << "Person " << i + 1 << endl;
		cout << "Enter ID: ";
		cin >> info[i].id;
		cout << "Enter sex (M or F): ";
		cin >> info[i].sex;
		cout << "Enter hourly wage: ";
		cin >> info[i].hourlyWage;
		cout << "Enter number of years you have worked: ";
		cin >> info[i].noOfYears;
		cout << "Enter the number of hours you have worked: ";
		cin >> info[i].hours;

	}
}

void WriteOnFile(PersonalInfo info[], int size, fstream& file) {

	file.open("Info.txt", ios::out);

	for (int i = 0; i < size - 1; i++) {


		for (int j = 0; j < size - i - 1; j++) {


			if (info[j].id > info[j + 1].id) {

				PersonalInfo temp = info[j];
				info[j] = info[j + 1];
				info[j + 1] = temp;
			}
		}
	}

	file << "ID" << setw(15) << "Sex" << setw(15) << "Hourly Wage" << setw(15) << "Years worked" << endl;

	for (int i = 0; i < size; i++) {

		file << info[i].id << setw(15) << info[i].sex << setw(15) << info[i].hourlyWage << setw(15) << info[i].noOfYears << endl;
	}

	file.close();

}

void ReadFromFile(PersonalInfo info[], int size, fstream& file) {

	file.open("Info.txt", ios::in);

	string line;

	getline(file, line);

	int HourlyWage[50];

	for (int i = 0; i < size; i++) {

		getline(file, line);

		stringstream ss(line);

		int id;
		char sex;
		int hourlyWage;
		int noOfYears;


		ss >> id >> sex >> hourlyWage >> noOfYears;

		HourlyWage[i] = hourlyWage;

	}

	cout << endl;

	cout << "ID" << setw(15) << "Total Pay" << endl;

	for (int i = 0; i < size; i++) {

		cout << info[i].id << setw(15) << HourlyWage[i] * info[i].hours << endl;
	}

	file.close();
}

void update(PersonalInfo info[], int size, fstream& file) {

	file.open("Info.txt", ios::out);

	double NewhoulyWage;
	int id;


	cout << "Enter ID: ";
	cin >> id;

	cout << "Enter new hourly wage: ";
	cin >> NewhoulyWage;

	for (int i = 0; i < size; i++) {

		if (info[i].id == id) {

			info[i].hourlyWage = NewhoulyWage;
		}

	}

	file << "ID" << setw(15) << "Sex" << setw(15) << "Hourly Wage" << setw(15) << "Years worked" << endl;

	for (int i = 0; i < size; i++) {

		file << info[i].id << setw(15) << info[i].sex << setw(15) << info[i].hourlyWage << setw(15) << info[i].noOfYears << endl;
	}

	file.close();
}



int main() {

	int size, num;

	cout << "Enter number of employees: ";
	cin >> size;

	PersonalInfo info[50];

	fstream file;

	getInfo(info, size);

	WriteOnFile(info, size, file);

	ReadFromFile(info, size, file);

	cout << endl;

	cout << "To change hourly wage of an Employee Press 1: ";
	cin >> num;

	if (num == 1) {
		update(info, size, file);
		cout << "The New calculated wage for Employees is: ";
		cout << endl;
		ReadFromFile(info, size, file);

	}

	else
		return 0;

	

}