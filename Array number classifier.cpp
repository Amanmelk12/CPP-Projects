#include <iostream>
using namespace std;

void Even(int arr[], int size, int Evenarr[50],int evensize) {

	for (int i = 0; i < size; i++) {

		if (arr[i] % 2 == 0) {

			Evenarr[evensize++] = arr[i];
		}
	}

	for (int i = 0; i < evensize; i++) {

		cout << Evenarr[i] << " ";
	}

}

void Odd(int arr[], int size, int Oddarr[],int oddsize) {

	for (int i = 0; i < size; i++) {

		if (arr[i] % 2 == 1) {

			Oddarr[oddsize++] = arr[i];
		}
	}


	for (int i = 0; i < oddsize; i++) {

		cout << Oddarr[i] << " ";
	}


}


void Prime(int size, int arr[], int Primearr[],int primesize) {


	for (int i = 0; i < size; i++) {

		int counter = 0;

		for (int j = 2; j < arr[i]; j++) {

			if (arr[i] % j == 0) {

				counter = 1;
			}

		}

		if (counter == 0) {

			Primearr[primesize++] = arr[i];
		}
	}

	for (int i = 0; i < primesize; i++) {

		cout << Primearr[i] << " ";
	}


}

int main() {

	int arr[50], Evenarr[50], Oddarr[50], Primearr[50];

	int size;

	int oddsize = 0, primesize = 0, evensize = 0;

	cout << "Enter size of array: ";
	cin >> size;

	for (int i = 0; i < size; i++) {

		cout << "Enter element" << i + 1 << ": ";
		cin >> arr[i];
	}

	cout << endl;

	cout << "Orginal array" << endl;

	for (int i = 0; i < size; i++) {

		cout << arr[i] << " ";
	}

	cout << endl;

	cout << "Odd numbers of the orginal array" << endl;

	Odd(arr, size, Oddarr,oddsize);

	cout << endl;

	cout << "Even numbers from orginal array" << endl;

	Even(arr, size, Evenarr,evensize);

	cout << endl;

	cout << "Prime numbers from orginal array" << endl;

	Prime(size, arr, Primearr,primesize);


}

