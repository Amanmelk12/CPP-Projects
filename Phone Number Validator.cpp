#include <iostream>
#include <string>
using namespace std;

struct PhoneInfo {

	int areaCode;
	int exchange;
	int number;

};

void Display(PhoneInfo Phone[], int size) {

	for (int i = 0; i < size; i++) {

		cout << "Enter area code: ";
		cin >> Phone[i].areaCode;

		while (cin.fail()) {

	
		   cout << "Wrong input Enter area code: " << endl;
		   cin.clear();
		   cin.ignore();
		   cin >> Phone[i].areaCode;

			
		}

		while (to_string(Phone[i].areaCode).length() != 3) {

			cout << "Area code must be 3 digits" << endl;
			cout << "Enter Area code: " << endl;
			cin.clear();
			cin.ignore();
			cin >> Phone[i].areaCode;
		}

		cout << "Enter exchange number: ";
		cin >> Phone[i].exchange;

		while (cin.fail()) {


			cout << "Wrong input Enter exchange number: " << endl;
			cin.clear();
			cin.ignore();
			cin >> Phone[i].exchange;


		}


		while (to_string(Phone[i].exchange).length() != 4) {

			cout << "Exchange number must be 4 digits" << endl;
			cout << "Enter Exchange number: " << endl;
			cin.clear();
			cin.ignore();
			cin >> Phone[i].exchange;
		}

		cout << "Enter number: ";
		cin >> Phone[i].number;

		while (cin.fail()) {


			cout << "Wrong input Enter number: " << endl;
			cin.clear();
			cin.ignore();
			cin >> Phone[i].number;


		}


		while (to_string(Phone[i].number).length() != 4) {

			cout << "A number must be 4 digits" << endl;
			cout << "Enter number: " << endl;
			cin.clear();
			cin.ignore();
			cin >> Phone[i].number;
		}
	}

	cout << "The telephone Information are" << endl;

	for (int i = 0; i < size; i++) {

		cout << "(" << Phone[i].areaCode << ")" << " " << Phone[i].exchange << "-" << Phone[i].number << endl;

	}

}

int main() {

	int size;

	PhoneInfo Phone[50];

	cout << "Enter amount of telephone numbers: ";
	cin >> size;


	Display(Phone, size);

	
}