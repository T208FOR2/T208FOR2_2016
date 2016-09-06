#include <iostream>

using namespace std;
int readNumber();
void readNumber(int &number);

bool isEqual(int number1, int number2);
void printResault(int num1, int num2);

int main()
{
    int num1, num2;
    num1 = readNumber();
    readNumber(num2);
    printResault(num1, num2);

    return 0;
}

int readNumber()
{
    int number;
    cin >> number;
    return number;
}

void readNumber(int &number)
{
    cin >> number;
}

bool isEqual(int number1, int number2)
{
    if(number1 == number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printResault(int num1, int num2)
{
    if(isEqual(num1,num2) == true)
    {
        cout << num1 << " and " << num2 << " are the same number" << endl;
    }
    else
    {
        cout << num1 << " and " << num2 << " are not the same number" << endl;
    }
}







