#include <iostream>

using namespace std;
int readArray(int arr[]);
void printArray(int arr[], int length);

const int MAX_SIZE = 20;

int main()
{
    int arr[MAX_SIZE];

    int lengd = readArray(arr);
    printArray(arr, lengd);


    return 0;
}

int readArray(int arr[])
{
    int number = 0;
    int i = 0;
    cin >> number;
    while(number >= 0 && i < MAX_SIZE)
    {
        arr[i] = number;
        i++;
        cin >> number;
    }
    return i;
}

void printArray(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
