#include <iostream>

using namespace std;

// Les inn tölu og skila
int readNumber();
void readNumber2(int &x);

bool isEqual(int num1, int num2);

int main()
{
    int num1;
    num1 = readNumber();

    int num2;
    readNumber2(num2);

    if(isEqual(num1, num2) == true)
    {
        cout << num1 << " = " << num2 << endl;
    }
    else
    {
        cout << num1 << " and " << num2 << " are not equal" << endl;
    }

    return 0;
}

bool isEqual(int num1, int num2)
{
    if(num1 == num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void readNumber2(int &x)
{
    cin >> x;
}

int readNumber()
{
    int num;
    cin >> num;
    return num;
}
