#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t = "This is a text to see how the find function works.";
    cout << "012345678901234567890123456789012345678901234567890" << endl;
    cout << t << endl;

    string leitarord;
    cin >> leitarord;

    cout << t.find(leitarord) << endl;

    return 0;
}

