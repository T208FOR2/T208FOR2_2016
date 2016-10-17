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

    void fix_minutur();
    void fix_klst();
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

void Timi::fix_minutur() {
    while (minutur < 0) {
        minutur += 60;
        klst--;
    }
    while (minutur >= 60) {
        minutur -= 60;
        klst++;
    }
}
void Timi::fix_klst() {
    while (klst < 0) {
        klst += 24;
    }
    while (klst >= 24) {
        klst -= 24;
    }
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

