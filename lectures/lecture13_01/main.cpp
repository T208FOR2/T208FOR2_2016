#include <iostream>
#include <string>
// Problem 1: Read n words (string) and print them in reverse order

using namespace std;

void mirror_strings(string *fylki, int n);

int main()
{
    int n;
    string *words;

    cout << "How many words? ";
    cin >> n;

    words = new string[n];

    cout << "Write " << n << " words seperated by spaces:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    mirror_strings(words, n);

    cout << "The words in reverse order are: " << endl;
// old solution:   for (int i = n-1; i >= 0; i--) {
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    delete [] words;
    return 0;
}

void mirror_strings(string *fylki, int n) {
    for (int i = 0; i < n/2; i++) {
        string tmp = fylki[i];
        fylki[i] = fylki[n-1-i];
        fylki[n-1-i] = tmp;
    }
}



