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

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
