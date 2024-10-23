#include <iostream>
using namespace std;

void Accmenu1() {

	cout << "**********MENU**********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "5. Transfer" << endl;
	cout << "************************" << endl;
}

void Accmenu2() {

	cout << "**********MENU**********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "5. Transfer" << endl;
	cout << "************************" << endl;
}

int main()
{
	int balance1 = 1000, balance2 = 500;
	int accnum, Accnum;
	int accnum1 = 1234, accnum2 = 5678;
	int option;
	int depositAmount1, depositAmount2;
	int withdrawAmount1, withdrawAmount2;
	int transferAmount1, transferAmount2;

here:

	cout << "Enter your account number: ";
	cin >> accnum;

	if (accnum == accnum1) {

		Accmenu1();
		cout << endl;
		cout << "Enter option: " << endl;
		cin >> option;

		switch (option) {

		case 1:

			cout << "Your balance is: " << balance1 << endl;
			break;

		case 2:

			cout << "Enter amount of deposit: " << endl;
			cin >> depositAmount1;

			balance1 += depositAmount1;

			break;

		case 3:

			cout << "Enter withdraw amount: " << endl;
			cin >> withdrawAmount1;

			if (withdrawAmount1 <= balance1) {
				balance1 -= withdrawAmount1;
			}

			break;

		case 4:

			return 0;

			break;

		case 5:

			cout << "Enter Account number: " << endl;
			cin >> Accnum;

			if (Accnum == accnum2) {
				cout << "Enter transfer amount: " << endl;
				cin >> transferAmount1;

				if (transferAmount1 < balance1) {
					balance1 -= transferAmount1;
					balance2 += transferAmount1;
					cout << "Transfer has been done successfully" << endl;
				}
			}
			else
				cout << "Account number not found" << endl;

			break;
		}
	}


	if (accnum == accnum2) {

		Accmenu2();
		cout << endl;
		cout << "Enter option: " << endl;
		cin >> option;

		switch (option) {

		case 1:

			cout << "Your balance is: " << balance2 << endl;
			break;

		case 2:

			cout << "Enter amount of deposit: " << endl;
			cin >> depositAmount2;

			balance2 += depositAmount2;

			break;

		case 3:

			cout << "Enter withdraw amount: " << endl;
			cin >> withdrawAmount2;

			if (withdrawAmount2 <= balance2) {
				balance2 -= withdrawAmount2;
			}

			break;

		case 4:

			return 0;

			break;

		case 5:

			cout << "Enter Account number: " << endl;
			cin >> Accnum;

			if (Accnum == accnum1) {
				cout << "Enter transfer amount: " << endl;
				cin >> transferAmount2;

				if (transferAmount2 < balance2) {
					balance2 -= transferAmount2;
					balance1 += transferAmount2;
					cout << "Transfer has been done successfully" << endl;
				}
			}
			else
				cout << "Account number not found" << endl;

			break;
		}
	}

	if (option == 1 || option == 2 || option == 3 || option == 5) {
		goto here;
	}

}
