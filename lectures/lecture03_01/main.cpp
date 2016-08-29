#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "How many stars? ";
    cin >> n;

    int i;
    for ( i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << i << endl;

    return 0;
}
