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

    cout << "-------------------" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    make_it_big(p, rows, columns);
    cout << "-------------------" << endl;
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
    // Step 1: Create a new array
    int **new_p = new int*[n*2];
    for (int i = 0; i < 2*n; i++) {
        new_p[i] = new int[2*m];
    }
    // Step 2: Copy information
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            new_p[i][j] = p[i][j];
            new_p[i+n][j] = p[i][j];
            new_p[i][j+m] = p[i][j];
            new_p[i+n][j+m] = p[i][j];
        }
    }
    // Step 3: Delete old one
    for (int i = 0; i < n; i++) {
        delete [] p[i];
    }
    delete [] p;

    // Step 4: Update info, point to new array
    p = new_p;
    n = 2*n;
    m = 2*m;
}





