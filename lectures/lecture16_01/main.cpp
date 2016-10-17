#include <iostream>
using namespace std;

class Timi {
public:
    int klst;
    int minutur;

    void output();
};

int main()
{
    Timi t;

    t.klst = 17;
    t.minutur = 3;

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

