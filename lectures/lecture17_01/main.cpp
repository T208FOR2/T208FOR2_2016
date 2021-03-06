#include <iostream>
using namespace std;

class Timi {
public:
    Timi();  // Constructor (default constructor)
    Timi(int m);
    Timi(int k, int m);

    void set_klst(int k);
    void set_minutur(int m);
    int get_klst() const { return klst; };
    int get_minutur() const { return minutur; };

    void output() const;

    friend ostream& operator << (ostream& outs, const Timi &t);
    friend istream& operator >> (istream& ins, Timi &t);

    friend bool operator > (const Timi &lhs, const Timi &rhs);
    friend bool operator == (const Timi &lhs, const Timi &rhs);
    friend bool operator >= (const Timi &lhs, const Timi &rhs);
    friend bool operator < (const Timi &lhs, const Timi &rhs);
    friend bool operator <= (const Timi &lhs, const Timi &rhs);
    friend bool operator != (const Timi &lhs, const Timi &rhs);

    friend Timi operator + (const Timi &lhs, const Timi &rhs);
    friend Timi operator - (const Timi &lhs, const Timi &rhs);

    friend Timi operator + (const Timi &lhs, int tala);

    friend Timi operator - (const Timi &t);

private:
    int klst;
    int minutur;

    void fix_minutur();
    void fix_klst();
};

int main()
{
    Timi *p;
    int n;
    cin >> n;

    p = new Timi[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    Timi samtals;
    for (int i = 0; i < n; i++) {
        samtals = samtals + p[i];
    }
    cout << samtals << endl;

    if (samtals < p[0]) {
        cout << "Something...?" << endl;
    }
    delete [] p;


    Timi t1,t2;

    cin >> t1 >> t2;

    if (t1 > t2) {
        cout << t1 << endl;
    }
    else {
        cout << t2 << endl;
    }

    Timi t3 = t1 - t2;
    t3 = t3 + 40;

    t3 = 20 + t3;

    cout << -t3 << endl;



    return 0;
}

Timi operator - (const Timi &t) {
    Timi new_t;
    new_t.klst = -t.klst;
    new_t.minutur = -t.minutur;
    new_t.fix_minutur();
    new_t.fix_klst();
    return new_t;
}

Timi operator + (const Timi &lhs, int tala) {
    Timi new_t = lhs;
    new_t.minutur += tala;
    new_t.fix_minutur();
    new_t.fix_klst();
    return new_t;
}


Timi operator + (const Timi &lhs, const Timi &rhs) {
    Timi new_t;

    new_t.klst = lhs.klst + rhs.klst;
    new_t.minutur = lhs.minutur + rhs.minutur;
    new_t.fix_minutur();
    new_t.fix_klst();

    return new_t;
}

Timi operator - (const Timi &lhs, const Timi &rhs) {
    Timi new_t;

    new_t.klst = lhs.klst - rhs.klst;
    new_t.minutur = lhs.minutur - rhs.minutur;
    new_t.fix_minutur();
    new_t.fix_klst();

    return new_t;
}

bool operator > (const Timi &lhs, const Timi &rhs) {
    if (lhs.klst > rhs.klst) {
        return true;
    }
    else if (lhs.klst == rhs.klst && lhs.minutur > rhs.minutur) {
        return true;
    }
    else {
        return false;
    }
}

bool operator >= (const Timi &lhs, const Timi &rhs) {
    return (lhs > rhs || lhs == rhs);
}
bool operator < (const Timi &lhs, const Timi &rhs) {
    return !(lhs >= rhs);
}
bool operator <= (const Timi &lhs, const Timi &rhs) {
    return !(lhs > rhs);
}

bool operator == (const Timi &lhs, const Timi &rhs) {
    return (lhs.klst == rhs.klst && lhs.minutur == rhs.minutur);
}

bool operator != (const Timi &lhs, const Timi &rhs) {
    return !(lhs == rhs);
}


istream& operator >> (istream& ins, Timi &t) {
    ins >> t.klst >> t.minutur;
    t.fix_minutur();
    t.fix_klst();
    return ins;
}

ostream& operator << (ostream& outs, const Timi &t) {
    if (t.get_klst() < 10) {
        outs << "0";
    }
    outs << t.get_klst() << ":";
    if (t.get_minutur() < 10) {
        outs << "0";
    }
    outs << t.get_minutur();
    return outs;
}

Timi::Timi() {
    klst = 0;
    minutur = 0;
}

Timi::Timi(int m) {
    klst = 0;
    minutur = m;

    fix_minutur();
    fix_klst();
}

Timi::Timi(int k, int m) {
    klst = k;
    minutur = m;

    fix_minutur();
    fix_klst();
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
        klst = klst - 24;
    }
}

void Timi::set_klst(int k) {
    klst = k;

    fix_klst();
}
void Timi::set_minutur(int m) {
    minutur = m;

    fix_minutur();
    fix_klst();
}

void Timi::output() const {
    if (klst < 10) {
        cout << "0";
    }
    cout << klst << ":";
    if (minutur < 10) {
        cout << "0";
    }
    cout << minutur;
}

