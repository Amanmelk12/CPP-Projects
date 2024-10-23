#include <iostream>
using namespace std;

void Display(int num, int arr[], int totaldigit) {

	int digit;

	while (num != 0) { //Extracts and assigns all digits to an array

		digit = num % 10;
		arr[totaldigit++] = digit;
		num /= 10;

	}

	
	for (int i = 0; i < totaldigit-1; i++) { //Sorts in Ascending order

		for (int j = 0; j < totaldigit - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < totaldigit; i++) { //Display

		cout << arr[i];
	}

}







int main() {

	int num;
	int totaldigit = 0;

	int arr[10] = { 0 };

	cout << "Enter a number: ";
	cin >> num;

	Display(num, arr, totaldigit);
}