#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

// Þessi föll eru basically main föll
void hlutaprof2_daemi2();
void hlutaprof2_daemi3();
void hlutaprof2_daemi4();

void reverseArr(int *&arr, int n);
void printArr(int *arr, int n);

void openFile(ifstream &fin, string fname);
int readToArray(ifstream &fin, string *&arr, int &n);
void resizeArr(string *&arr, int &n);
void printStrArr(string *arr, int n);
bool isUnique(string *arr, int n);

int main()
{


    return 0;
}

void hlutaprof2_daemi4()
{
    string fname = "file1.txt";
    ifstream fin;

    openFile(fin, fname);
    int n = 2;
    string *arr = new string[n];

    int nrofwords = readToArray(fin, arr, n);

    if(isUnique(arr, nrofwords))
    {
        cout << "Unique words." << endl;
    }
    else
    {
        cout << "Some words appear more than once." << endl;
    }

    fin.close();

    if(arr != NULL)
    {
        delete[] arr;
    }
}

bool isUnique(string *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                return false;
            }
        }
    }
    return true;
}

void printStrArr(string *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int readToArray(ifstream &fin, string *&arr, int &n)
{
    int counter = 0;
    while(fin >> arr[counter++])
    {
        if(counter >= n)
        {
            resizeArr(arr, n);
        }
    }
    return counter - 1;
}

void resizeArr(string *&arr, int &n)
{
    string *tmp = new string[2*n];

    for(int i = 0; i < n; i++)
    {
        tmp[i] = arr[i];
    }

    delete[] arr;
    arr = tmp;
    n *= 2;
}

void openFile(ifstream &fin, string fname)
{
    fin.open(fname.c_str());
    if(fin.fail())
    {
        cout << "failed to open file \"" << fname << "\"" << endl;
        exit(1);
    }
}

void hlutaprof2_daemi3()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArr(arr, n);
    printArr(arr, n);

    delete[] arr;
}

void reverseArr(int *&arr, int n)
{
    int tmp;
    for(int i = 0; i < n/2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
}

void printArr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void hlutaprof2_daemi2()
{
    string word1, word2;
    string longer;
    cin >> word1 >> word2;

    int shorter;
    if(word1.length() < word2.length())
    {
        shorter = word1.length();
        longer = word2;
    }
    else
    {
        shorter = word2.length();
        longer = word1;
    }

    for(int i = 0; i < shorter; i++)
    {
        cout << word1[i] << word2[i];
    }
    cout << longer.substr(shorter, longer.length() - shorter);
    cout << endl;
}
