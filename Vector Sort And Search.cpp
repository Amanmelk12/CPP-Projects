#include <iostream>
#include <vector>
using namespace std;

template <class T>

void Sort(T value[], int size) {


	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {

			if (value[i] < value[j]) {

				int temp = value[i];
				value[i] = value[j];
				value[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {

		cout << value[i] << " ";
	}



}
template <class T>

void search(T value[], int size) {

	int Search;

	cout << "Enter the element to be searched: ";
	cin >> Search;

	for (int i = 1; i <= size; i++) {

		if (value[i] == Search) {

			cout << i << " is the index";
			break;
		}
	}
}

int main() {

	int size, value;

	cout << "Enter the size of vector: ";
	cin >> size;

	vector<int>num;

	for (int i = 1; i <= size; i++) {

		cout << "Enter element " << i << ": ";
		cin >> value;
		num.push_back(value);
	}


	search(num.data(), size);

	cout << endl;

	Sort(num.data(), size);


}