#include <iostream>
using namespace std;

class Timi {
public:

    void output();
private:
    int klst;
    int minutur;
};

int main()
{
    Timi t;

    cin >> t.klst >> t.minutur;

    t.output();
    cout << endl;

    return 0;
}


void Timi::output() {
    if (klst < 10) {
        cout << "0";
    }
    cout << klst << ":";
    if (minutur < 10) {
        cout << "0";
    }
    cout << minutur;
}

