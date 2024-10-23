#include <iostream>
#include <iomanip>
using namespace std;

struct Netsalary {

	int employeeId[100];
	string name[100];
	float grossSalary[100];
	float incomeTax[100];
	float net[100];

};

int NetSalary(Netsalary netsalary, int employeeSize) {

	for (int i = 0; i < employeeSize; i++) {

		cout << endl;

		cout << "Enter gross salary: ";
		cin >> netsalary.grossSalary[i];

		cout << endl;

		cout << "Employee Id " << setw(15) << "Employee Name" << setw(15) << "Net Salary" << endl;

		if (netsalary.grossSalary[i] >= 10000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.35;
		}

		if (netsalary.grossSalary[i] >= 5000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.2;
		}

		if (netsalary.grossSalary[i] >= 3000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.1;
		}

		if (netsalary.grossSalary[i] < 3000) {

			netsalary.incomeTax[i] = 0;

		}


		return netsalary.net[i] = netsalary.grossSalary[i] - netsalary.incomeTax[i];


	}


}

void Display(Netsalary netsalary, int employeeSize) {


	for (int i = 0; i < employeeSize; i++) {


		cout << netsalary.employeeId[i] << setw(19) << netsalary.name[i] << setw(20) << NetSalary(netsalary, employeeSize) << endl;

	}
}


int main() {

	Netsalary netsalary;

	int employeeSize, search;

	cout << "How many employees: ";
	cin >> employeeSize;

	for (int i = 0; i < employeeSize; i++) {

		cout << "Enter employee id: ";
		cin >> netsalary.employeeId[i];
		cout << "Enter employee name: ";
		cin >> netsalary.name[i];
		cout << "Enter gross salary: ";
		cin >> netsalary.grossSalary[i];

		cout << endl;

		if (netsalary.grossSalary[i] >= 10000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.35;
		}

		if (netsalary.grossSalary[i] >= 5000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.2;
		}

		if (netsalary.grossSalary[i] >= 3000) {

			netsalary.incomeTax[i] = netsalary.grossSalary[i] * 0.1;
		}

		if (netsalary.grossSalary[i] < 3000) {

			netsalary.incomeTax[i] = 0;

		}
		netsalary.net[i] = netsalary.grossSalary[i] - netsalary.incomeTax[i];
	}

	cout << "Employee Id " << setw(15) << "Employee Name" << setw(15) << "Net Salary" << endl;

	for (int i = 0; i < employeeSize; i++) {


		cout << netsalary.employeeId[i] << setw(19) << netsalary.name[i] << setw(20) << netsalary.net[i] << endl;

	}

	cout << endl;

	cout << "Enter ID to be searched: ";
	cin >> search;

	bool found = false;

	for (int i = 0; i < employeeSize; i++) {

		if (search == netsalary.employeeId[i]) {


			cout << netsalary.employeeId[i] << setw(19) << netsalary.name[i] << setw(20) << netsalary.net[i] << endl;
			found = true;
			break;
		}

	}

	if (found == false)
        cout << "The Id that you have entered does not exist" << endl;


	Display(netsalary, employeeSize);

}