#include <iostream>

using namespace std;
// Föll fyrir Dæmi 1
void pyramid(int n);

//Föll fyrir Sýnidæmi 2
int sum(int a, int b, int c);
int maxNum(int a, int b, int c);
int maxNum2(int a, int b, int c);

// Föll fyrir Dæmi 2
double average(int a, int b, int c);
double average2(int a, int b, int c);
int minNum(int a, int b, int c);
int minNum2(int a, int b, int c);

int main()
{
    /* ==================
       Sýnidæmi 1
       Skrifið forrit sem tekur inn eina tölu og prentar út "skákborð" í þeirri stærð sem talan segir
       til um, þ.e. prenta til skiptis ’X’ og bil, og byrja til skiptis hverja línu á ’X’ eða bili. Fyrsti reitur
       sem þið prentið út á að vera X.
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
       Dæmi 1
       Skrifið forrit sem tekur inn eina tölu og prentar út pýramída í þeirri hæð sem talan segir til um.

       ================== */
       cout << endl <<"DAEMI 1" << endl;
    /*     int n;
         cin >> n; */
    pyramid(n);

    /* ==================
    Sýnidæmi 2
    Búið til forrit sem hefur eftirfarandi eiginleika
    - Les inn þrjár heiltölur frá notenda
    - Fall sem tekur inn þrjár heiltölur og skilar summu þeirra
    - Fall sem tekur inn þrjár heiltölur og skilar hæstu tölunni
    - Forritið á að nota föllin til að reikna summu talnanna og finna hæsta gildið
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
       Dæmi 2
       Búið til forrit sem hefur eftirfarandi eiginleika
        - Les inn þrjár heiltölur frá notenda
        - Fall sem tekur inn þrjár heiltölur og skilar meðaltali þeirra
        - Fall sem tekur inn þrjár heiltölur og skilar minnstu tölunni
        - Forritið á að nota föllin til að reikna meðaltal talnanna og finna lægsta gildið
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
// Föll fyrir Dæmi 1
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
// Föll fyrir Sýnidæmi 2
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

// Föll fyrir Dæmi 2
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
