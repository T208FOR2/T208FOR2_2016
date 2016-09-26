#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string tolower(string s);

int main()
{
    string t = "This is a text to see how the find function works.";
    cout << "012345678901234567890123456789012345678901234567890" << endl;
    cout << t << endl;

    t = tolower(t);

    string leitarord;
    cin >> leitarord;

    leitarord = tolower(leitarord);

    int counter = 0;
    unsigned int pos = t.find(leitarord);
    if (pos < t.length()) {
        counter = 1;

        while ( t.find(leitarord, pos+1) < t.length() ) {
            counter++;
            pos = t.find(leitarord, pos+1);
        }

        cout << "Found " << counter << " times." << endl;
    }
    else {
        cout << "Not found!" << endl;
    }

    return 0;
}

string tolower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string toupper(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}




