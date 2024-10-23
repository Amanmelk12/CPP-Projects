#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

string GradeConv(double mark) {

	if (mark >= 90) {

		return "A+";
	}

	if (mark >= 80) {

		return "A";
	}

	if (mark >= 70) {

		return "B+";
	}

	else
		return "F";

}

double GPA(double mark[], int course) {

    double gpaPoints = 0;

	for (int i = 0; i < course; i++) {

     

		if (mark[i] >= 90) {

			gpaPoints += 4;
		}

		else if (mark[i] >= 80) {

			gpaPoints += 3;
		}

		else if (mark[i] >= 70) {

			gpaPoints += 2;
		}

	}

	return gpaPoints / course;
}


int main() {

	double mark[50];

	int course;

	string name, request;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Hi " << name << " Enter the number of courses your taking: ";
	cin >> course;

	for (int i = 0; i < course; i++) {

		cout << "Enter mark for course " << i + 1 << ": ";
		cin >> mark[i];
	}

	cout << name << " this is your grade for the result you entered" << endl;

	cout << "|------Mark------|------Grade------|" << endl;

	for (int i = 0; i < course; i++) {

		cout << setw(10) << mark[i] << setw(17) << GradeConv(mark[i]) << endl;

	}

	cout << endl;

	cout << "Do you want to calculate your GPA? (Yes/No): ";
	cin >> request;

	transform(request.begin(), request.end(), request.begin(), tolower);

	if (request == "yes") {

		double gpa = GPA(mark, course);

		cout << "Your Gpa is: " << gpa;

	}

	if (request == "no")
		return 0;
}


