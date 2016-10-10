#include <iostream>

using namespace std;

void make_it_big(int** &p, int &n, int &m);

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int **p;
    p = new int*[rows];
    for (int i = 0; i < rows; i++) {
        p[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete [] p[i];
    }
    delete [] p;

    return 0;
}

void make_it_big(int** &p, int &n, int &m) {
    int **new_p = new int*[n*2];
    for (int i = 0; i < 2*n; i++) {
        new_p[i] = new int[2*m];
    }


}





