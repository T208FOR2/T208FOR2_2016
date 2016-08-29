#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if (b && a) {
        cout << "b && a is true???" << endl;
    }
    else {
        cout << "b && a is not true...?" << endl;
    }

    cout << "The largest number is: ";
    if (a >= b && a >= c) {
        cout << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    return 0;
}
