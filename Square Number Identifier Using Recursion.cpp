#include <iostream>
using namespace std;

int PerfectSquare(int num, int i, int j) {


	int multiple = i * j;

	if (multiple == num) {

	   return multiple;

	}

	if (multiple > num) {

		return 1;
	}

    else {

		i++; j++;

		return PerfectSquare(num,i,j);

	}

}

int main() {

	
	
	int num, product;

	cout << "Enter a number: ";
	cin >> num;


	for (int k = 1; k <= num; k++) {

		int i = 1, j = 1;

		product = PerfectSquare(k, i ,j);

		if (product == num)

			cout << k << " is a perfect square";

		else

			cout << k << " is not a perfect square";
	}
}