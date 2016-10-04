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

    int *p = &x; // pointerinn p bendir á sama minni og minniğ sem breytan x er geymd í
    int *p1 = p; // pointerinn p1 bendir á sama minni og pointerinn p
    (*p)++; // (*p) vísar í gildiğ í minninu sem p bendir á. (*p)++ hækkar gildiğ í minninu sem p bendir á

    cout << "x: " << x << endl;
    cout << "*p: " << *p << endl;
    cout << "*p1: " << *p1 << endl;

    cout << "y :" << y << endl;
    cout << "p :" << p << endl;
    cout << "p1: " << p1 << endl;

    int *p2 = new int; // pointerinn p2 bendir á nıtt minni
    *p2 = *p1; // innihaldiğ í minninu sem p2 bendir á er şağ sama og innihaldiğ í minninu sem p1 bendir á
    (*p2)++; // Hækkum innihaldiğ í minninu sem p2 bendir á
    cout << "*p1: " << *p1 << endl;
    cout << "*p2 :" << *p2 << endl;
    cout << "p2 :" << p2 << endl;

    delete p2; // Eyğum minninu sem p2 bendir á -> kölluğum á new, şurfum ağ kalla á delete


    int n;
    cin >> n;

    int *dynArray = new int[n]; // pointerinn dynArray bendir á minni sem er int fylki af stæğr 2

    lesaInn(dynArray, n);
    prentaFylki(dynArray, n);

    int* ofugt = reverseArray(dynArray, n);
    prentaFylki(ofugt, n);

    delete[] dynArray;
    delete[] ofugt;


    // Taka frá inni fyrir fylkiğ
    int** fylki = new int*[n];
    for(int i = 0 ; i < n; i++)
    {
        fylki[i] = new int[n];
    }

    // Lesa inní fyliğ
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> fylki[i][j];
        }
    }

    // Prenta út fylkiğ
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << fylki[i][j] << " ";
        }
        cout << endl;
    }

    // Reikna summuna í fylki
    int summa = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            summa = summa + fylki[i][j];
        }
    }
    cout << "summa : " << summa << endl;

    // Eyğa tvívíğu fylki
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




