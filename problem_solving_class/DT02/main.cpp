#include <iostream>

using namespace std;
// F�ll fyrir D�mi 1
void pyramid(int n);

//F�ll fyrir S�nid�mi 2
int sum(int a, int b, int c);
int maxNum(int a, int b, int c);
int maxNum2(int a, int b, int c);

// F�ll fyrir D�mi 2
double average(int a, int b, int c);
double average2(int a, int b, int c);
int minNum(int a, int b, int c);
int minNum2(int a, int b, int c);

int main()
{
    /* ==================
       S�nid�mi 1
       Skrifi� forrit sem tekur inn eina t�lu og prentar �t "sk�kbor�" � �eirri st�r� sem talan segir
       til um, �.e. prenta til skiptis �X� og bil, og byrja til skiptis hverja l�nu � �X� e�a bili. Fyrsti reitur
       sem �i� prenti� �t � a� vera X.
       ================== */
    cout << "SYNIDAEMI 1" << endl;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i+j)%2 == 0)
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
    /* ==================
       D�mi 1
       Skrifi� forrit sem tekur inn eina t�lu og prentar �t p�ram�da � �eirri h�� sem talan segir til um.

       ================== */
       cout << endl <<"DAEMI 1" << endl;
    /*     int n;
         cin >> n; */
    pyramid(n);

    /* ==================
    S�nid�mi 2
    B�i� til forrit sem hefur eftirfarandi eiginleika
    - Les inn �rj�r heilt�lur fr� notenda
    - Fall sem tekur inn �rj�r heilt�lur og skilar summu �eirra
    - Fall sem tekur inn �rj�r heilt�lur og skilar h�stu t�lunni
    - Forriti� � a� nota f�llin til a� reikna summu talnanna og finna h�sta gildi�
    ================== */
    cout << endl << "SYNIDAEMI 2" << endl;

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int summa = sum(num1, num2, num3);
    cout << num1 << " + " << num2 << " + " << num3 << " = " << summa << endl;
    cout << num1 << " + " << num2 << " + " << num3 << " = " << sum(num1, num2, num3) << endl;

    int maxNumber = maxNum(num1, num2, num3);
    cout << maxNumber << " is the largest number" << endl;
    cout << maxNum(num1, num2, num3) << " is the largest number" << endl;
    cout << maxNum2(num1, num2, num3) << " is the largest number" << endl;
    /* ==================
       D�mi 2
       B�i� til forrit sem hefur eftirfarandi eiginleika
        - Les inn �rj�r heilt�lur fr� notenda
        - Fall sem tekur inn �rj�r heilt�lur og skilar me�altali �eirra
        - Fall sem tekur inn �rj�r heilt�lur og skilar minnstu t�lunni
        - Forriti� � a� nota f�llin til a� reikna me�altal talnanna og finna l�gsta gildi�
       ================== */
       cout << endl << "DAEMI 2" << endl;
    /*
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;*/

    double ave = average(num1, num2, num3);
    cout <<"The average of " << num1 << "," << num2 << "," << num3 << " is " << ave << endl;
    cout <<"The average of " << num1 << "," << num2 << "," << num3 << " is " << average(num1, num2, num3) << endl;
    cout <<"The average of " << num1 << "," << num2 << "," << num3 << " is " << average2(num1, num2, num3) << endl;

    int minNumber = minNum(num1, num2, num3);
    cout << minNumber << " is the smallest number" << endl;
    cout << minNum(num1, num2, num3) << " is the smallest number" << endl;
    cout << minNum2(num1, num2, num3) << " is the smallest number" << endl;
    return 0;
}
// F�ll fyrir D�mi 1
void pyramid(int n)
{

    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= n-i; k++)
        {
            cout << " ";
        }
        for(int j = 1; j <= (i*2-1) ; j++)
        {
            cout << "X";
        }
        cout << endl;
    }
}
// F�ll fyrir S�nid�mi 2
int sum(int a, int b, int c)
{
    int summa = a + b + c;
    return summa;
}

int maxNum(int a, int b, int c)
{
    int maxNumber = 0;
    if( a > b && a > c)
    {
        maxNumber = a;
    }
    else if( b > a && b > c)
    {
        maxNumber = b;
    }
    else
    {
        maxNumber = c;
    }
    return maxNumber;
}

int maxNum2(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }
    if( b > a && b > c)
    {
        return b;
    }
    return c;
}

// F�ll fyrir D�mi 2
double average(int a, int b, int c)
{
    double ave = (a + b + c)/3.0;
    return ave;
}

double average2(int a, int b, int c)
{
    double ave = sum(a, b, c)/3.0;
    return ave;
}

int minNum(int a, int b, int c)
{
    int minNumber = 0;
    if( a < b && a < c)
    {
        minNumber = a;
    }
    else if( b < a && b < c)
    {
        minNumber = b;
    }
    else
    {
        minNumber = c;
    }
    return minNumber;
}

int minNum2(int a, int b, int c)
{
    if(a < b && a < c)
    {
        return a;
    }
    if( b < a && b < c)
    {
        return b;
    }
    return c;
}
