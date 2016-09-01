#include <iostream>

using namespace std;

// Function declerations
void prenta_linu(int hlidrun, int whitespace, int symbols, char takn);
void prenta_pyramid(int hlidrun, int levels, char takn);
int max_grade(int a, int b);
int max_grade(int a, int b, int c);
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
void prenta_pyramid(int hlidrun, int levels, char takn) {
    for (int i = 0; i < levels; i++) {
        prenta_linu(hlidrun, levels - 1 - i, takn);
    }
}

void prenta_linu(int hlidrun, int whitespace, int symbols, char takn) {
    int i;
    for (i = 0; i < hlidrun; i++) {
        cout << "_";
    }
    for (i = 0; i < whitespace; i++) {
        cout << "+";
    }
    for (i = 0; i < symbols; i++) {
        cout << takn;
    }
    cout << endl;
    return;
}

int max_grade(int a, int b) {
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}
int max_grade(int a, int b, int c) {
    return max_grade(max_grade(a,b), c);
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
    else if (d >= a && d >= b && d >= c) {
        return d;
    }
    else {
        return -1;
    }
}
