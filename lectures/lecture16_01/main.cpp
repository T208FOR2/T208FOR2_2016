#include <iostream>
using namespace std;

class Timi {
public:
    void set_klst(int k);
    void set_minutur(int m);

    void output();
private:
    int klst;
    int minutur;
};

int main()
{
    Timi t;
    int k,m;
    cin >> k >> m;
    t.set_klst(k);
    t.set_minutur(m);

    t.output();
    cout << endl;

    return 0;
}

void Timi::set_klst(int k) {
    klst = k;
}
void Timi::set_minutur(int m) {
    minutur = m;
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

