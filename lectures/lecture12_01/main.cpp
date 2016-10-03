#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string *p;
    p = new string[n];

    // Do something clever with the array p

    delete [] p;

    return 0;
}
