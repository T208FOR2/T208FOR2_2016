#include <iostream>

using namespace std;

//Föll fyrir Dæmi 1
void printStars(int stars);
void printSpaces(int spcs);

//Föll fyrir Sınidæmi 2
int sum(int a, int b, int c);
int maxNum(int a, int b, int c);

// Föll fyrir Dæmi 2
double average(int a, int b, int c);
int minNum(int a, int b, int c);

int main()
{
    cout << "Synidaemi 1: " << endl << endl;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i+j) % 2 == 0)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;


    cout << "Daemi 1: " << endl << endl;

    // int n;
    cin >> n;

    for (int i = 1 ; i <= n; i++)
    {
        printSpaces(n-i);
        printStars(i*2-1);
        cout << endl;
    }

    cout << endl;


    cout << "Synidaemi 2: " << endl << endl;

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int summa = sum(num1, num2, num3);
    cout << num1 << " + " << num2 << " + " << num3 << " = " << summa << endl;
    cout << num1 << " + " << num2 << " + " << num3 << " = " << sum(num1, num2, num3) << endl;

    int maxNumber = maxNum(num1, num2, num3);
    cout << maxNumber << " is the largest number" << endl;
    cout << maxNum(num1, num2, num3) << " is the largest number" << endl;

    cout << endl;


    cout << "Daemi 2: " << endl << endl;

    double ave = average(num1, num2, num3);
    cout <<"The average of " << num1 << "," << num2 << "," << num3 << " is " << ave << endl;
    cout <<"The average of " << num1 << "," << num2 << "," << num3 << " is " << average(num1, num2, num3) << endl;

    int minNumber = minNum(num1, num2, num3);
    cout << minNumber << " is the smallest number" << endl;
    cout << minNum(num1, num2, num3) << " is the smallest number" << endl;

    return 0;
}


// Föll fyrir Dæmi 1
void printStars(int stars)
{
    for (int j = 1; j <= stars; j++)
        cout << "*";
}

void printSpaces(int spcs)
{
    for (int j = 1; j <= spcs; j++)
        cout <<" ";
}


// Föll fyrir Sınidæmi 2
int sum(int a, int b, int c)
{
    return a + b + c;
}

int maxNum(int a, int b, int c)
{
    int maxNumber = 0;

    if( a >= b && a >= c)
    {
        maxNumber = a;
    }
    else if( b >= a && b >= c)
    {
        maxNumber = b;
    }
    else
    {
        maxNumber = c;
    }
    return maxNumber;
}


// Föll fyrir Dæmi 2
double average(int a, int b, int c)
{
    return (a + b + c)/3.0;
}

int minNum(int a, int b, int c)
{
    int minNumber = 0;

    if( a <= b && a <= c)
    {
        minNumber = a;
    }
    else if( b <= a && b <= c)
    {
        minNumber = b;
    }
    else
    {
        minNumber = c;
    }
    return minNumber;
}
