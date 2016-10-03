#include <iostream>

using namespace std;

int main()
{
    int a = 83;
    int b = 99;

    int *p1;
    int *p2 = &b;

    p1 = &a;
    p2 = &b;

    *p1 = 42;

    p1 = p2;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "*p1: " << *p1 << endl;
    cout << "*p2: " << *p2 << endl;

    return 0;
}
