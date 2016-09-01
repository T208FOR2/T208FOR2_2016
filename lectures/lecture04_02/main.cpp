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
