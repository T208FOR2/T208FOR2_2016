#include <iostream>
#include <climits>

using namespace std;

// Les inn tölu og skila
int readNumber();         // Call-by-value
void readNumber2(int &x); // Call-by-reference

// Athugar hvort tvær tölur séu eins
bool isEqual(int num1, int num2);  // Lengri leiğin
bool isEqual2(int num1, int num2); // Styttri leiğin

// Snúa tölu viğ, virkar ekki ef tala endar á 0
int reverseNumber(int number);
// Athuga hvort tala sé palindrome (eins aftur á bak og áfram)
bool isPalindrome(int number);

int main()
{
    /* ===============
        Sınidæmi 1
         - Lesa inn tvær tölur
         - Athuga hvort şær séu eins
       =============== */
    cout << "SYNIDAEMI 1" << endl;
    int num1, num2;
    num1 = readNumber();
    readNumber2(num2);

    if(isEqual(num1, num2))
    {
        cout << num1 << " and " << num2 << " are the same number" << endl;
    }
    else
    {
        cout << num1 << " and " << num2 << " are not the same number" << endl;
    }

    /* ===============
        Dæmi 1
         - Lesa inn tölu
         - Athuga hvort hún sé palindrome (eins aftur á bak og áfram)
       =============== */
    cout << "DAEMI 1" << endl;
    int num3;
    readNumber2(num3);

    if(isPalindrome(num3))
    {
        cout << num3 << " is " << reverseNumber(num3) << " backwards and is a palindrome" << endl;
    }
    else
    {
        cout << num3 << " is " << reverseNumber(num3) << " backwards and is not a palindrome" << endl;
    }


    return 0;
}

// Lengri útgáfa
// Skilar true ef num1 == num2
// Annars false
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

// Styttri útgáfa
// Skilar true ef num1 == num2
// Annars false
bool isEqual2(int num1, int num2)
{
    return num1 == num2;
}

// Call-by-reference
// Les inn gildi í breytuna sem er send inn í falliğ
void readNumber2(int &x)
{
    cin >> x;
}

// Call-by-value
// Less inn gildi í breytuna num (bara til í fallinu)
// og skilar gildinu sem var lesiğ inn
int readNumber()
{
    int num;
    cin >> num;
    return num;
}

// Snır tölunni number viğ 1234 -> 4321
// Virkar ekki ef tala endar á 0
int reverseNumber(int number)
{
    int reversedNumber = 0;
    while(number != 0)
    {
        int remainder = number % 10;
        reversedNumber *= 10;
        reversedNumber += remainder;
        // Í stağinn fyrir 3 línur ağ ofan má gera şessa einu línu hér ağ neğan
        // sem er commentuğ út:
        // reversedNumber = number % 10 + reversedNumber * 10;
        number = number / 10;
    }
    return reversedNumber;
}

// Athugar hvort tala sé eins aftur á bak og áfram
// Notar föll sem eru nú şegar til
bool isPalindrome(int number)
{
    int reversedNumber = reverseNumber(number);
    return isEqual2(number, reversedNumber);
    // má líka gera:
    // return isEqual2(number, reverseNumber(number));
}
