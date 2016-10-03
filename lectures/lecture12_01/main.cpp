#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double *p;
    p = new double[n];

    // Do something clever with the array p

    delete [] p;

    return 0;
}
