#include <iostream>

using namespace std;

int main()
{
    int a = 42;
    int *p;

    p = &a;

    cout << a << endl;
    cout << *p << endl;

    cout << &a << endl;
    cout << p << endl;

    cout << &p << endl;

    return 0;
}
