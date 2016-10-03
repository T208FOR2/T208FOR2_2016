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

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p[i][j] = k++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete [] p[i];
    }
    delete [] p;

    return 0;
}
