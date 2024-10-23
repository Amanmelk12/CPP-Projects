#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	vector<int> v1;

	int size, value;

	cout << "Enter size: ";
	cin >> size;

	for (int i = 0; i < size; i++) {

		cout << "Enter element " << i + 1 << ": ";
		cin >> value;
		v1.push_back(value);
	}

	int Delete;

	cout << "Enter number to delete: ";
	cin >> Delete;

	it = find(v1.start(), v1.end(), Delete);

	v1.erase(it);

	for (int i : v1) {

		cout << v1[i] << " ";
	}
}