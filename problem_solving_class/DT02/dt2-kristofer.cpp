#include <iostream>
using namespace std;

// Yfirlýsing á föllum hér (segi að þau séu til)
// Skilgreini (útfæri) föllin fyrir neðan main
int sum(int a, int b, int c);
int max(int a, int b, int c);
int min(int a, int b, int c);
double avg(int a, int b, int c);


int main(){
  /* ==================
     Sýnidæmi 1
     Skrifið forrit sem tekur inn eina tölu og prentar út "skákborð" í þeirri stærð sem talan segir
     til um, þ.e. prenta til skiptis ’X’ og bil, og byrja til skiptis hverja línu á ’X’ eða bili. Fyrsti reitur
     sem þið prentið út á að vera X.
     ================== */
     int chessBoardHeight;
     cin >> chessBoardHeight;

     for(int i = 0; i < chessBoardHeight; i++)
     {
          if(i % 2 != 0)
          {
               cout << " ";
               // Ég vill að önnur hver lína sé einum staf styttri
               // af því að ég prenta út bil fyrst (athuga j < chessBoardHeight - 1)
               for(int j = 0; j < chessBoardHeight - 1; j++)
               {
                    if(j % 2 == 0)
                    {
                         // Prenta út X annað hvert skipti
                         cout << "X";
                    }
                    else
                    {
                         cout << " ";
                    }
               }
          }
          else
          {
               for(int j = 0; j < chessBoardHeight; j++)
               {
                    if(j % 2 == 0)
                    {
                         // Prenta út X annað hvert skipti
                         cout << "X";
                    }
                    else
                    {
                         cout << " ";
                    }
               }
          }
          // Passa að gera nýja línu þegar réttur fjöldi tákna er kominn
          cout << endl;
     }




     /* ==================
        Dæmi 1
        Skrifið forrit sem tekur inn eina tölu og prentar út pýramída í þeirri hæð sem talan segir til um.
        ================== */
     int pyramidHeight;
     cin >> pyramidHeight;

     int spaces = pyramidHeight - 1; // Veit að fjöldi bila er fyrst n - 1 og lækka síðan um 1 í hverrri línu
     int exes = 1; // Veit að fjöldi X-a er fyrst 1, hækkar síðan um 2 í hverri línu
     for(int row = 0; row < pyramidHeight; row++)
     {
          for(int i = 0; i < spaces; i++)
          {
               // Prenta út réttan fjölda bila
               cout << " ";
          }

          for(int i = 0; i < exes; i++)
          {
               // Prenta út réttan fjölda af X
               cout << "X";
          }

          // Bæti við nýrri línu
          cout << endl;

          // Passa mig á að stilla fjölda bila og X-a fyrir næstu ítrun
          spaces--; // lækka spaces um 1
          exes += 2; // hækka exes um 2

     }




     /* ==================
        Sýnidæmi 2
        Búið til forrit sem hefur eftirfarandi eiginleika
        - Les inn þrjár heiltölur frá notenda
        - Fall sem tekur inn þrjár heiltölur og skilar summu þeirra
        - Fall sem tekur inn þrjár heiltölur og skilar hæstu tölunni
        - Forritið á að nota föllin til að reikna summu talnanna og finna hæsta gildið
        ================== */
     int num1, num2, num3;
     cin >> num1 >> num2 >> num3;

     cout << num1 << " + " << num2 << " + " << num3 << " = " << sum(num1, num2, num3) << endl;
     cout << max(num1, num2, num3) << " is the largest number" << endl;

     /* ==================
        Dæmi 2
        Búið til forrit sem hefur eftirfarandi eiginleika
        - Les inn þrjár heiltölur frá notenda
        - Fall sem tekur inn þrjár heiltölur og skilar meðaltali þeirra
        - Fall sem tekur inn þrjár heiltölur og skilar minnstu tölunni
        - Forritið á að nota föllin til að reikna meðaltal talnanna og finna lægsta gildið
        ================== */

     cout << "The average of " << num1 << "," << num2 << "," << num3 << " is " << avg(num1, num2, num3) << endl;
     cout << min(num1, num2, num3) << " is the smallest number" << endl;
     return 0;
}

int sum(int a, int b, int c)
{
     return a + b + c;
}

int max(int a, int b, int c)
{
     if(a >= b && a >= c)
     {
          return a;
     }
     else if(b >= c) // Veit að a < b (sjá síðasta skilyrði í if), þarf bara að athuga hvort b >= c
     {
          return b;
     }
     else
     {
          return c;
     }
}

int min(int a, int b, int c)
{
     if(a <= b && a <= c)
     {
          return a;
     }
     else if(b <= c) // Veit að b < a (sjá síðasta skilyrði í if), þarf bara að athuga hvort b <= c
     {
          return b;
     }
     else
     {
          return c;
     }
}

double avg(int a, int b, int c)
{
     return sum(a, b, c) / 3.0; // Athuga: þarf að nota 3.0 til að færa aukastafi!
}
