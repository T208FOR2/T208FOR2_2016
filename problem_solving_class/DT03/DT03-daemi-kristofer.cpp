#include <iostream>
#include <climits>

using namespace std;

// Les inn t�lu og skila
int readNumber();         // Call-by-value
void readNumber2(int &x); // Call-by-reference

// Athugar hvort tv�r t�lur s�u eins
bool isEqual(int num1, int num2);  // Lengri lei�in
bool isEqual2(int num1, int num2); // Styttri lei�in

// Sn�a t�lu vi�, virkar ekki ef tala endar � 0
int reverseNumber(int number);
// Athuga hvort tala s� palindrome (eins aftur � bak og �fram)
bool isPalindrome(int number);

int main()
{
    /* ===============
        S�nid�mi 1
         - Lesa inn tv�r t�lur
         - Athuga hvort ��r s�u eins
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
        D�mi 1
         - Lesa inn t�lu
         - Athuga hvort h�n s� palindrome (eins aftur � bak og �fram)
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

// Lengri �tg�fa
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

// Styttri �tg�fa
// Skilar true ef num1 == num2
// Annars false
bool isEqual2(int num1, int num2)
{
    return num1 == num2;
}

// Call-by-reference
// Les inn gildi � breytuna sem er send inn � falli�
void readNumber2(int &x)
{
    cin >> x;
}

// Call-by-value
// Less inn gildi � breytuna num (bara til � fallinu)
// og skilar gildinu sem var lesi� inn
int readNumber()
{
    int num;
    cin >> num;
    return num;
}

// Sn�r t�lunni number vi� 1234 -> 4321
// Virkar ekki ef tala endar � 0
int reverseNumber(int number)
{
    int reversedNumber = 0;
    while(number != 0)
    {
        int remainder = number % 10;
        reversedNumber *= 10;
        reversedNumber += remainder;
        // � sta�inn fyrir 3 l�nur a� ofan m� gera �essa einu l�nu h�r a� ne�an
        // sem er commentu� �t:
        // reversedNumber = number % 10 + reversedNumber * 10;
        number = number / 10;
    }
    return reversedNumber;
}

// Athugar hvort tala s� eins aftur � bak og �fram
// Notar f�ll sem eru n� �egar til
bool isPalindrome(int number)
{
    int reversedNumber = reverseNumber(number);
    return isEqual2(number, reversedNumber);
    // m� l�ka gera:
    // return isEqual2(number, reverseNumber(number));
}
