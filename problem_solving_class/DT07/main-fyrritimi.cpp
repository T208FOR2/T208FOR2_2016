#include <iostream>

using namespace std;
void lesaInn(int *arr, int n );
void prentaFylki(int *arr, int n );
int* reverseArray(int *arr, int n);

int main()
{
    int x = 3;
    int y = x;
    y++;
    cout << " x: " << x << endl;
    cout << " y: " << y << endl;

    int *p = &x; // pointerinn p bendir � sama minni og minni� sem breytan x er geymd �
    int *p1 = p; // pointerinn p1 bendir � sama minni og pointerinn p
    (*p)++; // (*p) v�sar � gildi� � minninu sem p bendir �. (*p)++ h�kkar gildi� � minninu sem p bendir �

    cout << "x: " << x << endl;
    cout << "*p: " << *p << endl;
    cout << "*p1: " << *p1 << endl;

    cout << "y :" << y << endl;
    cout << "p :" << p << endl;
    cout << "p1: " << p1 << endl;

    int *p2 = new int; // pointerinn p2 bendir � n�tt minni
    *p2 = *p1; // innihaldi� � minninu sem p2 bendir � er �a� sama og innihaldi� � minninu sem p1 bendir �
    (*p2)++; // H�kkum innihaldi� � minninu sem p2 bendir �
    cout << "*p1: " << *p1 << endl;
    cout << "*p2 :" << *p2 << endl;
    cout << "p2 :" << p2 << endl;

    delete p2; // Ey�um minninu sem p2 bendir � -> k�llu�um � new, �urfum a� kalla � delete


    int n;
    cin >> n;

    int *dynArray = new int[n]; // pointerinn dynArray bendir � minni sem er int fylki af st��r 2

    lesaInn(dynArray, n);
    prentaFylki(dynArray, n);

    int* ofugt = reverseArray(dynArray, n);
    prentaFylki(ofugt, n);

    delete[] dynArray;
    delete[] ofugt;


    // Taka fr� inni fyrir fylki�
    int** fylki = new int*[n];
    for(int i = 0 ; i < n; i++)
    {
        fylki[i] = new int[n];
    }

    // Lesa inn� fyli�
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> fylki[i][j];
        }
    }

    // Prenta �t fylki�
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << fylki[i][j] << " ";
        }
        cout << endl;
    }

    // Reikna summuna � fylki
    int summa = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            summa = summa + fylki[i][j];
        }
    }
    cout << "summa : " << summa << endl;

    // Ey�a tv�v��u fylki
    for(int i = 0; i < n; i++)
    {
        delete [] fylki[i];
    }

    delete [] fylki;




    return 0;
}

void lesaInn(int *arr, int n )
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void prentaFylki(int *arr, int n )
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* reverseArray(int *arr, int n)
{
    int *reversed = new int[n];
    for(int i = 0; i < n; i++)
    {
        reversed[i] = arr[n-1-i];
    }
    return reversed;
}

void reverseArray2(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}




