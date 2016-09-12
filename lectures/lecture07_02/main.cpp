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

    cin >> texti;
    cout << "The text is \"" << texti << "\"" << endl;



    return 0;
}
