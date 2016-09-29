#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string rotateoneplace(string s);

int main()
{
    // Problem 1: Capitalize a sentence.
    /*
    string s;
    getline(cin, s);

    for (unsigned int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    s[0] = toupper(s[0]);
    cout << "01234567890123456789012345678901234567890" << endl;
    cout << s << endl;

    unsigned int pos;
    pos = s.find_first_of(" ,.!?\"\t\\");
    while (pos < s.length()-1) {
        cout << "index: " << pos << endl;
        s[pos+1] = toupper(s[pos+1]);
        pos = s.find_first_of(" ,.!?\"\t\\", pos+1);
    }
    cout << s << endl;
    */

    /*
    // Problem 2: Check if email address is valid
    string email;
    cin >> email;

    bool emailisok = true;

    // check one: email contains @ (not in first or last place)
    unsigned int pos = email.find("@");
    if (pos == 0 || pos >= email.length()-1) {
        emailisok = false;
    }

    // check two: only one @
    if (emailisok) {
        pos = email.find("@", pos+1);
        if ( pos < email.length() ) {
            emailisok = false;
        }
    }

    // check three: at least one period after @
    if (emailisok) {
        cout << "012345678901234567890" << endl;
        cout << email << endl;

        pos = email.find("@");
        cout << "@ at index " << pos << endl;

        pos = email.find_first_of(".", pos+1);
        cout << ". at index " << pos << endl;

        if (pos >= email.length()-1) {
            emailisok = false;
            cout << "Failed check 3" << endl;
        }
    }

    if (emailisok) {
        cout << "Passed all checks!" << endl;
    }
    else {
        cout << "This is not a valid email" << endl;
    }

    */

    // Problem 3: Rotate text
    string s;
    int n;
    cin >> s >> n;

    while (n < 0) {
        n = n + s.length();
    }
    n = n % s.length();

    cout << s << endl;

    return 0;
}

string rotatestring(string s, int n) {
    for (int i = 0; i < n; i++) {
        s = rotateoneplace(s);
    }
    return s;
}

string rotateoneplace(string s) {
    return s[s.length()-1] + s.substr(0, s.length()-1);
}


