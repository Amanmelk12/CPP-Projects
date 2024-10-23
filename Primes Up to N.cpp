#include <iostream>
using namespace std;

void PrimeToN(int n) {

	int sum = 0;

	for (int i = 2; i <= n; i++) {

		int counter = 0;

		for (int j = 2; j < i; j++) {

			if (i % j == 0)
				counter = 1;
		}

		if (counter == 0) {

			if (num / i == 0) {

				arr[pos] = i;
				pos++;
			}
		}
	}


}





int main() {

	int n, arr[50], pos = 0;

	cout << "Enter element n: ";
	cin >> n;

	cout << endl;

	cout << "The prime factors of " << num << " is" << endl;

	for (int i = 0; i < pos; i++) {

		cout << arr[i] << " ";
	}


}