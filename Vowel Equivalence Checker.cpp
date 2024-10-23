#include <iostream>
using namespace std;

int main()
{
	string word, store1, store2;

	int vowelCounter1 = 0, vowelCounter2 = 0;

	cout << "Enter a word: ";
	cin >> word;

	int half = (word.length()) / 2;

	if (half % 2 != 0) {
		cout << "not alike";
		return 0;
	}

	for (int i = 0; i <= half - 1; i++) {

		store1 = store1 + word[i];

		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
			vowelCounter1++;
		}
	}

	cout << vowelCounter1;

	for (int i = half + 1; i < word.length()-1; i++) {

		store2 = store2 + word[i];

		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
			vowelCounter2++;
		}
	}

	cout << vowelCounter2;
	

	if (vowelCounter1 == vowelCounter2) {
		cout << "True";
	}


	if (vowelCounter1 != vowelCounter2) {
		cout << "false";
	}

}