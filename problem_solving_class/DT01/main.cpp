#include <iostream>

using namespace std;

int main()
{
    /* ==================
       S�nid�mi 1
       B�i� til forrit sem hefur eftirfarandi eiginleika
            - Les inn tv�r heilt�lur fr� notenda
            - Leggur t�lurnar saman
            - Prentar �t ni�urst��una
       ================== */

    int num1, num2;
    cout << "Please write two integers:" << endl;
    cin >> num1;
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    /* ==================
       D�mi 1
       B�i� til forrit sem hefur eftirfarandi eiginleika
            - Les inn tv�r heilt�lur fr� notenda
            - Notar eftirfarandi virkja: +,-,*,/ og %
            - Prentar �t ni�urst��una
       ================== */

    /*int num1, num2;
    cout << "Please write two integers:" << endl;
    cin >> num1;
    cin >> num2;*/

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    /* ==================
      S�nid�mi 2
      B�i� til forrit sem hefur eftirfarandi eiginleika
           - Les inn tv�r heilt�lur fr� notenda
           - Forriti� ber t�lurnar saman
           - Prentar �t hvort t�lurnar eru eins e�a ekki
      ================== */
    /*int num1, num2;
    cout << "Please write two integers:" << endl;
    cin >> num1;
    cin >> num2;*/

    if(num1 == num2)
    {
        cout << "The numbers are equal" << endl;
    }
    else
    {
        cout << num1 << " and " << num2 << " are not the same number" << endl;
    }

    /* ==================
      D�mi 2
      B�i� til forrit sem hefur eftirfarandi eiginleika
           - Les inn tv�r heilt�lur fr� notenda
           - Forriti� ber t�lurnar saman
           - Prentar �t hvor talan er st�rri e�a a� ��r eru jafn st�rar
      ================== */
    /*int num1, num2;
    cout << "Please write two integers:" << endl;
    cin >> num1;
    cin >> num2;*/

    if(num1 > num2)
    {
        cout << num1 << " is larger than " << num2 << endl;
    }
    else if(num2 > num1)
    {
        cout << num2 << " is larger than " << num1 << endl;
    }
    else
    {
        cout << "The numbers are equal" << endl;
    }

    /* ==================
      S�nid�mi 3
      B�i� til forrit sem hefur eftirfarandi eiginleika
           - Les inn �rj�r heilt�rlur (t.d a, b, c)
           - Forriti� leggur saman fyrstu tv�r t�lurnar og athugar hvort summan er j�fn �ri�ju t�lunni �.e hvort a + b = c
           - Prentar �t hvort summan er j�fn �ri�ju t�lunni
      ================== */
    int a, b, c;
    cout << "Please write three integers" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a + b == c)
    {
        cout << a << " + " << b << " = " << c << " is correct" << endl;
    }
    else
    {
        cout << a << " + " << b << " = " << c << " is incorrect" << endl;
    }
    /* ==================
      D�mi 3
      B�i� til forrit sem hefur eftirfarandi eiginleika
           - Les inn �rj�r heilt�lur fr� notenda (t.d a, b, c)
           - Forriti� deilir annarri t�lunni � �� fyrstu og athugar hvort ni�ursta�an er j�fn �ri�ju t�lunni �.e hvort a/b = c
           - Prentar �t hvort deilingin er j�fn �ri�ju t�lunni
      ================== */
    /*int a, b, c;
    cout << "Please write three integers" << endl;
    cin >> a;
    cin >> b;
    cin >> c;*/
    if(b != 0)
    {
        if( a / b == c)
        {
            cout << a << " / " << b << " = " << c << " is correct" << endl;
        }
        else
        {
            cout << a << " / " << b << " = " << c << " is incorrect" << endl;
        }
    }
    else
    {
        cout << "deiling me� 0 " << endl;
    }

    return 0;
}
