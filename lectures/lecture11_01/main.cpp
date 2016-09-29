#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    // Problem 1: Capitalize a sentence.
    string s;
    getline(cin, s);

    for (unsigned int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    return 0;
}
