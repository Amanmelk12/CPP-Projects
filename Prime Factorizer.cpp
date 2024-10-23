#include <iostream>
using namespace std;

int PrimeCheck(int num) {

	int counter = 0;

	for (int i = 2; i < num; i++) {

		counter = 0;

		if (num % i == 0) {
			counter = 0;
			return counter;
		}

	}

	if (counter == 0) {
		return 1;
	}


}

void PrimeFactors(int num, int arr[], int pos) {

	for (int i = 2; i < num; i++) {

		if (PrimeCheck(i) == 1) {

			while(num % i == 0) {

				arr[pos++] = i;
				num /= i;


			}
		}

	}

	cout << "Factors of " << num << " are: ";

	for (int i = 0; i < pos; i++) {

		cout << arr[i] << " ";
	}



}

int main() {

	int num, pos = 0, arr[50];


	cout << "Enter a number: ";
	cin >> num;

	cout << endl;

	PrimeFactors(num, arr, pos);


}