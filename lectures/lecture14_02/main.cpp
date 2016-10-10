#include <iostream>

using namespace std;



int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int **p;
    p = new int*[rows];
    for (int i = 0; i < rows; i++) {
        p[i] = new int[columns];
    }


    return 0;
}
