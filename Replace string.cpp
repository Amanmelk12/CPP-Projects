#include <iostream>
using namespace std;
#include <string>


int main()
{
	// (position of new word , length of new word , word to be replaced)
	string word, change, newWord;

	cout << "Enter a word: ";
	getline(cin, word);

	cout << "Enter the word you want to be replaced: ";
	getline(cin, change);

	cout << "Enter new word: ";
	getline(cin, newWord);

	string modifiedWord = word.replace(word.find(change), change.length(), newWord);

	cout << modifiedWord;
	

}

