#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int **p;
    p = new int*[n];
    for (int i = 0; i < n; i++) {
        p[i] = new int[m];
    }



    // Do something clever with the array p

    for (int i = 0; i < n; i++) {
        delete [] p[i];
    }
    delete [] p;

    return 0;
}
