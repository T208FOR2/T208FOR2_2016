#include <iostream>

using namespace std;
void createMatrix(int**& matrix, int rows, int col);
void deleteMatrix(int** matrix, int rows);
void printMatrix(int** matrix, int rows, int col);
void fillMatrix(int** matrix, int rows, int col);
int* maxInRows(int** matrix, int rows, int col);
int main()
{
    int n, m;
    cin >> n >> m;
    int** fylki;
    createMatrix(fylki, n, m);

    fillMatrix(fylki, n, m);
    printMatrix(fylki, n, m);

    int* maxFylki = maxInRows(fylki, n, m);
    for(int i = 0; i < n ; i++)
    {
        cout << maxFylki[i] << " ";
    }

    deleteMatrix(fylki, n);
    delete [] maxFylki;
    return 0;
}

int* maxInRows(int** matrix, int rows, int col)
{
    int* maxRows = new int[rows];
    for(int i = 0; i < rows; i++)
    {
        maxRows[i] = matrix[i][0];
        for(int j = 1; j < col ; j++)
        {
            if(matrix[i][j] > maxRows[i])
            {
                maxRows[i] = matrix[i][j];
            }
        }
    }
    return maxRows;
}
void fillMatrix(int** matrix, int rows, int col)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int** matrix, int rows, int col)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

void createMatrix(int**& matrix, int rows, int col)
{
    matrix = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        matrix[i] = new int[col];
    }
}

void deleteMatrix(int** matrix, int rows)
{
    for(int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;
}
