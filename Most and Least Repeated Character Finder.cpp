#include <iostream>
#include <string>
using namespace std;


int main()
{
 
    string word;

    int counter = 0, wordCounter[50], i;

    cout << "Enter word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {

        counter = 0;
        for (int j = 0; j < word.length(); j++) {

            if (word[i] == word[j]) {
                counter++;

            }
        }
        wordCounter[i] = counter;
    }

    int max = wordCounter[0];

    for (int i = 0; i < word.length(); i++) {

        if (max < wordCounter[i]) {
            max = wordCounter[i];
        }
    }


    for (int i = 0; i < word.length(); i++) {

        if (wordCounter[i] == max) {

            cout << word[i] << " is the most repeated character" << endl;
            cout << word[i] << " was repeated " << max << " times" << endl;
            break;
        }
    }

    int min = wordCounter[0];

    for (int i = 0; i < word.length(); i++) {

        if (min > wordCounter[i]) {
            min = wordCounter[i];
        }
    }

    for (int i = 0; i < word.length(); i++) {

        if (wordCounter[i] == min) {

            cout << word[i] << " is the least repeated character" << endl;
            cout << word[i] << " was repeated " << min << " times";
            break;

        }
    }

}