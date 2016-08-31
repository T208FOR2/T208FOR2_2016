#include <iostream>
using namespace std;

int main()
{
    int tala;
    cin >> tala;
    cout << "0: " << tala << endl;

    if (tala == 42) {
        cout << "1: " << tala << endl;
        cout << "You wrote 42!" << endl;
    }
    else if (tala > 0) {
        cout << "2: " << tala << endl;
        cout << "Positive!" << endl;
    }
    else {
        cout << "3: " << tala << endl;
        cout << "You wrote a wrong number" << endl;
    }

    return 0;
}
