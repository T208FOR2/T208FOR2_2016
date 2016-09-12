#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int tala;
    string texti;
    char takn;

    cout << "Write something: ";
    cin.get(takn);

    if (isdigit(takn))
    {
        cin >> tala;
        cout << "The number is " << tala << endl;
    }
    else if (isalpha(takn))
    {
        cin >> texti;
        cout << "The text is \"" << texti << "\"" << endl;
    }
    else
    {
        cin >> texti;
        cout << "I've no idea what \"" << texti << "\" is..." << endl;
    }

    return 0;
}
