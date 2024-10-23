#include <iostream>
using namespace std;

int ReverseDigits(int num) { 

	int reversed = 0;

	while (num != 0) {

		int digit = num % 10; //Access the rightmost integer

		reversed = reversed * 10 + digit; //Add the rightmost integer to reversed var

		num /= 10; // remove the last digit
	}

	return reversed;

}


int main() {

	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << endl;

	cout << "The reversed number is: " << ReverseDigits(num);


}