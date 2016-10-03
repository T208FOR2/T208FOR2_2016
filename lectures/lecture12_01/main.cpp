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

    return 0;
}
