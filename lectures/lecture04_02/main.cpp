#include <iostream>

using namespace std;

// Function declerations
void prenta_linu(int hlidrun, int whitespace, int symbols, char takn);
int max_grade(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    prenta_linu(6, 3, 4, '*');

    int staersta;
    staersta = max_grade(a,b,c,d);

    return 0;
}

// Function definitions
void prenta_linu(int hlidrun, int whitespace, int symbols, char takn) {
    for (int i = 0; i < hlidrun; i++) {
        cout << "_";
    }
    for (int i = 0; i < whitespace; i++) {
        cout << "+";
    }
    for (int i = 0; i < symbols; i++) {
        cout << takn;
    }
    cout << endl;
}

int max_grade(int a, int b, int c, int d) {
    if (a >= b && a >= c && a >= d) {
        return a;
    }
    else if (b >= a && b >= c && b >= d) {
        return b;
    }
    else if (c >= a && c >= b && c >= d) {
        return c;
    }
    else {
        return d;
    }
}
