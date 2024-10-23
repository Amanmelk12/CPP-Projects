#include <iostream>
using namespace std;

// A Program That finds product of digits
// To find sum of digits change

//Change Product variable to sum
//Change Value of sum from 0 to 1
//Change sign from * to +

int Display(int num) {


	int product = 1, digit;

	if (num == 0) {

		product = 0;

		return product;

	}

	while (num != 0) {

		digit = num % 10;

		if (digit >= 0) {

			product *= digit;

			num = num / 10;

			if (num >= 1 && num <= 9) { // for the last digit

				product *= num;

				return product;
			}
		}

	}

}



int main() {

	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << Display(num);

}