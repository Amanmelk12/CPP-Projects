#include <iostream>
#include <string>
using namespace std;

int RevserseDigits(int num) {

	int size;
	int reversedDigits;

	size = to_string(num).length()

    for (int i = size - 1; i >= reversedDigits; i--) {

		reversedDigits += num[i];

	}

	return reversedDigits;

}


int main() {

	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << endl;

	cout << "The reversed number is: " << RevereseDigits(num);

	
}