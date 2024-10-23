#include <iostream>
#include <iomanip>
using namespace std;


struct BirthDate {

	int month;
	int day;
	int year;
};

struct StudnetInfo {

	string name;
	int rollNo;
	float marks[50];
	BirthDate BOD;

};



void Calc(StudnetInfo studnet[], BirthDate BOD[], int size, int subjects) {

	for (int i = 0; i < size; i++) {

		cout << "Enter your name: ";
		cin >> studnet[i].name;
		cout << "Enter your roll number: ";
		cin >> studnet[i].rollNo;
		cout << "Enter your birthdate" << endl;
		cout << "Month: ";
		cin >> BOD[i].month;
		cout << "Day: ";
		cin >> BOD[i].day;
		cout << "Year: ";
		cin >> BOD[i].year;


		for (int j = 0; j < subjects; j++) {

			cout << "Enter mark" << j + 1 << ": ";
			cin >> studnet[i].marks[j];

		}

		cout << endl;

	}



}

void Display(StudnetInfo studnet[], BirthDate BOD[], int size, int subjects) {

	cout << "Roll_Number" << setw(10) << "Name" << setw(18) << "Birth_Day" << setw(20) << "Average" << endl;

	for (int i = 0; i < size; i++) {

		float average = 0;

		cout << studnet[i].rollNo << setw(19) << studnet[i].name << setw(13) << BOD[i].month << "/" << BOD[i].day << "/" << BOD[i].year << setw(18);

		for (int j = 0; j < subjects; j++) {

			average = average + studnet[i].marks[j];


		}

		cout << average / subjects;

		cout << endl;

	}

}

void BelowAvg(StudnetInfo studnet[], BirthDate BOD[], int size, int subjects) {


	float average = 0;
	int counter = 0;

	for (int i = 0; i < size; i++) {


		for (int j = 0; j < subjects; j++) {

			average = average + studnet[i].marks[j];

		}

		if ((average / subjects) > 50) {

			counter++;
		}

		if ((average / subjects)) < 50) {

			cout << "Studnets Marks below average are" << endl;

			cout << endl;

			cout << "Roll_Number" << setw(10) << "Name" << setw(16) << "Average" << endl;

			cout << studnet[i].rollNo << setw(20) << studnet[i].name << setw(15) << average / subjects << endl;
		}


		if (counter == size) {

			cout << "Currently there are no studnets who's average are below 50" << endl;

		}


	}

}



int main() {

	int size, subjects;

	StudnetInfo studnet[50];
	BirthDate BOD[50];

	cout << "Enter number of students: ";
	cin >> size;

	cout << "Enter number of subjects: ";
	cin >> subjects;

	cout << endl;

	Calc(studnet, BOD, size, subjects);
	Display(studnet, BOD, size, subjects);

	cout << endl;

	BelowAvg(studnet, BOD, size, subjects);

	cout << endl;

	int search;

	cout << endl;

	cout << "To seach studnet data Enter Roll Number: ";
	cin >> search;

	cout << endl;

	bool Found = false;

	for (int i = 0; i < size; i++) {

		float average = 0;

		if (search == studnet[i].rollNo) {

			cout << "Roll_Number" << setw(10) << "Name" << setw(18) << "Birth_Day" << setw(20) << "Average" << endl;

			cout << studnet[i].rollNo << setw(19) << studnet[i].name << setw(13) << BOD[i].month << "/" << BOD[i].day << "/" << BOD[i].year << setw(18);

			for (int j = 0; j < subjects; j++) {

				average = average + studnet[i].marks[j];


			}

			cout << average / subjects;

			cout << endl;

			bool Found = true;

			break;
		}

		if (bool found = false) {

			cout << "No student is recorded by this ID" << endl;

			break;

		}


	}

}