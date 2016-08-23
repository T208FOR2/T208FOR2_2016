#include <iostream>

using namespace std;

int main()
{
    /* ==================
       Sınidæmi 1
       Búiğ til forrit sem hefur eftirfarandi eiginleika
            - Les inn tvær heiltölur frá notenda
            - Leggur tölurnar saman
            - Prentar út niğurstöğuna
       ================== */

    int num1, num2;
    cout << "Please write two integers:" << endl;
    cin >> num1;
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    /* ==================
       Dæmi 1
       Búiğ til forrit sem hefur eftirfarandi eiginleika
            - Les inn tvær heiltölur frá notenda
            - Notar eftirfarandi virkja: +,-,*,/ og %
            - Prentar út niğurstöğuna
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
      Sınidæmi 2
      Búiğ til forrit sem hefur eftirfarandi eiginleika
           - Les inn tvær heiltölur frá notenda
           - Forritiğ ber tölurnar saman
           - Prentar út hvort tölurnar eru eins eğa ekki
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
      Dæmi 2
      Búiğ til forrit sem hefur eftirfarandi eiginleika
           - Les inn tvær heiltölur frá notenda
           - Forritiğ ber tölurnar saman
           - Prentar út hvor talan er stærri eğa ağ şær eru jafn stórar
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
      Sınidæmi 3
      Búiğ til forrit sem hefur eftirfarandi eiginleika
           - Les inn şrjár heiltörlur (t.d a, b, c)
           - Forritiğ leggur saman fyrstu tvær tölurnar og athugar hvort summan er jöfn şriğju tölunni ş.e hvort a + b = c
           - Prentar út hvort summan er jöfn şriğju tölunni
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
      Dæmi 3
      Búiğ til forrit sem hefur eftirfarandi eiginleika
           - Les inn şrjár heiltölur frá notenda (t.d a, b, c)
           - Forritiğ deilir annarri tölunni í şá fyrstu og athugar hvort niğurstağan er jöfn şriğju tölunni ş.e hvort a/b = c
           - Prentar út hvort deilingin er jöfn şriğju tölunni
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
        cout << "deiling meğ 0 " << endl;
    }

    return 0;
}
