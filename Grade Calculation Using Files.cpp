#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct Student {

	int id;
	string name;
	double mark;
	char grade;

};

void getData(Student student[], int size) {

	for (int i = 0; i < size; i++) {

		cout << endl;
		cout << "Student " << i + 1 << endl;
		cout << "Enter your ID: ";
		cin >> student[i].id;
		cout << "Enter your name: ";
		cin >> student[i].name;
		cout << "Enter your mark: ";
		cin >> student[i].mark;

	}

	for (int i = 0; i < size; i++) {


		if (student[i].mark >= 50) {

			student[i].grade = 'P';
		}


		else
			student[i].grade = 'F';

	}


}

void ReadFromFile(Student student[], int size, fstream& file) {

	file.open("studentInfo.txt", ios::in);

	string line;

	while (getline(file, line)) {

		cout << line << endl;

	}

	file.close();
}

void SaveToFile(Student student[], int size, fstream& file) {

	file.open("studentInfo.txt", ios::out);

	file << "ID" << setw(13) << "Name" << setw(13) << "Mark" << setw(13) << "Grade" << endl;

	for (int i = 0; i < size; i++) {

		file << student[i].id << setw(13) << student[i].name << setw(13) << student[i].mark << setw(13) << student[i].grade << endl;

	}

	cout << endl;

	file.close();

}


void update(Student student[], int size, fstream& file) {

	int id;
	double newMark;

	file.open("studentInfo.txt", ios::out);

	cout << endl;

	cout << "Enter ID: ";
	cin >> id;

	cout << "Enter updated mark: ";
	cin >> newMark;

	for (int i = 0; i < size; i++) {

		if (student[i].id == id) {

			student[i].mark = newMark;

			if (newMark >= 50) {

				student[i].grade = 'P';
			}

			else
				student[i].grade = 'F';
		}

	}

	file << "ID" << setw(13) << "Name" << setw(13) << "Mark" << setw(13) << "Grade" << endl;

	for (int i = 0; i < size; i++) {

		file << student[i].id << setw(13) << student[i].name << setw(13) << student[i].mark << setw(13) << student[i].grade << endl;

	}

	file.close();



}




int main() {

	Student student[50];
	int size;

	fstream file;

	cout << "Enter number of students: ";
	cin >> size;

	getData(student, size);

	SaveToFile(student, size, file);

	ReadFromFile(student, size, file);

	update(student, size, file);



}