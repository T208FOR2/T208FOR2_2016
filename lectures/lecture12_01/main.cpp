#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *p;
    p = new int[n];

    for (int i = 0; i < n; i++) {
        p[i] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << "p[" << i << "] = " << p[i] << endl;
    }




    return 0;
}
