#include <iostream>
using namespace std;

void Display(int num,int arr[],int &arrsize) {

	int digit;

	while (num != 0) {

		digit = num % 10;

		arr[arrsize++] = digit;

		num = num / 10;

		if (num >= 1 && num <= 9) {

			arr[arrsize] = digit;

			break;
		}
	}

	for (int i = 0; i < arrsize; i++) {

		for (int j = 0; j < arrsize; j++) {

			if (arr[i] > arr[j]) {

				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}


	cout << "The Sorted number is: ";

	for (int i = 0; i < arrsize; i++) {

		cout << arr[i];
	}
}



int main() {

	int num arr[], arrsize = 0;

	cout << "Enter a number: ";
	cin >> num;

	Display(num);

}