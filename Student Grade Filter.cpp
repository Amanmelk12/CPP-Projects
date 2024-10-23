#include <iostream>
#include <iomanip>
using namespace std;

struct StudentInfo {

	int Id;
	string name;
	double marks;

};

void Calc(StudentInfo student[], int& size) {

	cout << "Enter number of students: ";
	cin >> size;

	for (int i = 0; i < size; i++) {

		cout << "Enter your name: ";
		cin >> student[i].name;
		cout << "Enter your ID: ";
		cin >> student[i].Id;
		cout << "Enter mark" << i + 1 << ": "; 
		cin >> student[i].marks;

		if (student[i].marks > 30 || student[i].marks < 0) {

			cin.clear();
			cin.ignore();
			cout << "Your mark should be in between 0 and 30" << endl;
			cout << "Enter mark: ";
			cin >> student[i].marks;
		}

	}

	cout << endl;

	cout << "ID" << setw(15) << "Name" << setw(18) << "Marks" << endl;

	for (int i = 0; i < size; i++) {

		if (student[i].marks >= 20) {

		    cout << student[i].Id << setw(16) << student[i].name << setw(18) << student[i].marks << endl;
		}
		
	}


}

int main() {

	int size;

	StudentInfo student[50];

	Calc(student, size);
}