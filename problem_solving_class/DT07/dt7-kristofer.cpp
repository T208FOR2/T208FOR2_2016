#include <iostream>

using namespace std;

void synidaemi1();

void readNumbers(int *arr, int n);
void print(int *arr, int n);
void reverseArray(int *arr, int n);

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    readNumbers(arr, n);
    reverseArray(arr, n);
    print(arr, n);

    delete[] arr;
    return 0;
}

void readNumbers(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int *arr, int n)
{
    int *tmp = new int[n];

//    for(int i = 0; i < n; i++)
//    {
//        tmp[i] = arr[n - i - 1];
//    }

    for(int i = n - 1; i >= 0; i--)
    {
        tmp[n - i - 1] = arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        arr[i] = tmp[i];
    }

    delete[] tmp;
}

void synidaemi1()
{
    int x = 3;
    int y = x;
    y++;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    int *p = &x;
    (*p)++;
    x = 32;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "x = " << x << endl;

    int *p1 = new int;

    *p1 = *p;
    (*p1)++;

    cout << "*p = " << *p << endl;
    cout << "*p1 = " << *p1 << endl;

    delete p1;


    int n;
    int m;
    cin >> n;
    cin >> m;

    int **arr = new int*[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
