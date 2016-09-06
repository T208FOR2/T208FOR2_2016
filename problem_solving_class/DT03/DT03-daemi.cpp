#include <iostream>

using namespace std;
int readNumber();
void readNumber(int &number);

bool isEqual(int number1, int number2);
void printResault(int num1, int num2);
int reverseNumber(int number);
void reverseNumber(int number, int &reversedNumber);

int main()
{
    int num;
    num = readNumber();

    int reversed;
    reversed = reverseNumber(num);

    if(isEqual(num, reversed)== true)
    {
        cout << num << " is " << reversed << " backwards and is a palindrome";
    }
    else
    {
        cout << num << " is " << reversed << " backwards and is not a palindrome";
    }

    return 0;
}

int reverseNumber(int number)
{
    int reversedNumber = 0;
    int remainder = 0;

    while(number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber*10 + remainder;
    }
    return reversedNumber;
}

void reverseNumber(int number, int &reversedNumber)
{
    int remainder = 0;
    reversedNumber = 0;

    while(number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber*10 + remainder;
    }
}

// Sınidæmi
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







