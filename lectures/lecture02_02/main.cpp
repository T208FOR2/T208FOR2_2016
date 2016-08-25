#include <iostream>
using namespace std;

int main()
{
    int tala;
    cin >> tala;

    if (tala == 42) {
        cout << "You wrote 42!" << endl;
    }
    else if (tala > 0) {
        cout << "Positive!" << endl;
    }
    else {
        cout << "You wrote a wrong number" << endl;
    }


    return 0;
}
