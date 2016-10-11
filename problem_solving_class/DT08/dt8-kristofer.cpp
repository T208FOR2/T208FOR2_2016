#include <iostream>

using namespace std;

void createArray(int **&arr, int n, int m);
int** createArray2(int n, int m);

void transpose(int **&arr, int n, int m);
int **transpose2(int **arr, int n, int m);

void printArray(int **arr, int n, int m);

void spurningar();


void exchangeWords(string &str, string word1, string word2);
string exchangeWords2(string str, string word1, string word2);

void wordsToUpper(string &str);

void daemi1();

void readToArray(int **&arr, int n, int m);
int* findRowMax(int **arr, int n, int m);

int main()
{
    int n, m;

    cin >> n >> m;
    int **arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    readToArray(arr, n, m);
//    printArray(arr, n, m);

    int *rowMax;
    rowMax = findRowMax(arr, n, m);

    for(int i = 0; i < n; i++)
    {
        cout << rowMax[i] << " ";
    }
    cout << endl;

    delete[] rowMax;

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
void readToArray(int **&arr, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int* findRowMax(int **arr, int n, int m)
{
    int *rowMax = new int[n];

    for(int i = 0; i < n; i++)
    {
        rowMax[i] = arr[i][0];
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] > rowMax[i])
            {
                rowMax[i] = arr[i][j];
            }
        }
    }

    return rowMax;
}

void daemi1()
{
    string ord1, ord2, setning;

    cin >> ord1 >> ord2;
    cin.ignore();
    getline(cin, setning);

//    exchangeWords(setning, ord1, ord2);
    setning = exchangeWords2(setning, ord1, ord2);
    wordsToUpper(setning);

    cout << setning << endl;
}

void exchangeWords(string &str, string word1, string word2)
{
    int pos = str.find(word1);
    while(pos >= 0)
    {
        string fyrri = str.substr(0, pos);
        string seinni = str.substr(pos + word1.length(), str.length());
        str = fyrri + word2 + seinni;

        pos = str.find(word1, pos + 1);
    }
}

void wordsToUpper(string &str)
{
    unsigned int pos = str.find(" ");
    while(pos < str.length())
    {
        str[pos + 1] = toupper(str[pos + 1]);
        pos = str.find(" ", pos + 1);
    }
    str[0] = toupper(str[0]);
}

string exchangeWords2(string str, string word1, string word2)
{
    int pos = str.find(word1);
    while(pos >= 0)
    {
        string fyrri = str.substr(0, pos);
        string seinni = str.substr(pos + word1.length(), str.length());
        str = fyrri + word2 + seinni;

        pos = str.find(word1, pos + 1);
    }
    return str;
}

void spurningar()
{
    string a,b,c;
//    char d;
    cin >> a >> b;
    cin.ignore();
//    cin.get(d);
    getline(cin, c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    int **arr;

    createArray(arr, 3, 2);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(arr, 3, 2);

//    transpose(arr, 3, 2);
    arr = transpose2(arr, 3, 2);

    printArray(arr, 2, 3);

    for(int i = 0; i < 3; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void createArray(int **&arr, int n, int m)
{
    arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
}

int** createArray2(int n, int m)
{
    int **arr;
    arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    return arr;
}

void printArray(int **arr, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int **&arr, int n, int m)
{
    int **tmp = new int*[m];
    for(int i = 0; i < m; i++)
    {
        tmp[i] = new int[n];
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            tmp[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    arr = tmp;
}

int **transpose2(int **arr, int n, int m)
{
    int **tmp = new int*[m];
    for(int i = 0; i < m; i++)
    {
        tmp[i] = new int[n];
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            tmp[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return tmp;
}
