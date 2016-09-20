#include <iostream>

using namespace std;

// �kve� st�r� fylkis, �arf a� vera const (fasti)
const int MAX = 100;

// Lesa inn t�lur � fylki, jafngildar a�fer�ir
void readNumbers(int array[], int &counter);
int readNumber2(int array[]);

// Prenta �t fylki, fr� 0 til n-1 og fr� n-1 til 0 (reverse)
void printArray(int array[], int counter);
void printReverse(int array[], int counter);

// Sort fr� Eyj�
void insertionSort(int array[], int length);

int main()
{
    int numbers[MAX], counter = 0;

    readNumbers(numbers, counter);
    insertionSort(numbers, counter);
    printArray(numbers, counter);
    printReverse(numbers, counter);

    return 0;
}

// Prenta array, 0 til counter-1
void printArray(int array[], int counter)
{
    for(int i = 0; i < counter; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Prenta array, reverse, fr� counter-1 til 0
void printReverse(int array[], int counter)
{
    for(int i = counter - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// readNumbers, call-by-reference
void readNumbers(int array[], int &counter)
{
    int n;
    cin >> n;
    while(n >= 0 && counter < MAX)
    {
        array[counter] = n;
        counter++;
        cin >> n;
    }
}

// readNumbers, call-by-value og skilagildi
int readNumber2(int array[])
{
    int n, counter = 0;
    cin >> n;
    while(n >= 0 && counter < MAX)
    {
        array[counter] = n;
        counter++;
        cin >> n;
    }
    return counter;
}

// InsertionSort fr� Eyj�
void insertionSort(int array[], int length)
{
    int i, j, tmp;
    for (i = 1; i < length; i++)
    {
        tmp = array[i];
        j = i;
        while (j > 0 && array[j - 1] > tmp)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = tmp;
    }
}
