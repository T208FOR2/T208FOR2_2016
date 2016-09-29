#include <iostream>
#include <string>
#include <cctype>
using namespace std;

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
    pos =


    return 0;
}
