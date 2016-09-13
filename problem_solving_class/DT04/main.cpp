//
//  main.cpp
//  DT_04
//
//  Created by Sara Kristjánsdóttir on 12.9.2016.
//  Copyright © 2016 Sara Kristjánsdóttir. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

// Sýnidæmi 1
void openFile(ofstream& fout, string filename);
// Dæmi 1
void writeNumberToFile(ofstream& fout);
// Sýnidæmi 2
void printNumberFromFile(ifstream& fin);
void openFile(ifstream& fin, string filename);
// Dæmi 2
int sumOfNumbers(ifstream& fin);
int maxValue(ifstream &fin);
int minValue(ifstream &fin);


int main()
{
    string filename = "numbers.txt";
    
    // ======= SÝNIDÆMI 1 OG DÆMI 1 ==========
    // Ætlum að skrifa í skrá, þurfum að hafa ofstream
    ofstream fout;
    openFile(fout, filename);
    
    // Skrifum 10 tölur í skránna.
    // Fallið writeNumberToFile skrifar eina tölu í skránna.
    // Köllum á það inní forlykkju sem keyrir 10 sinnum -> það skrifast 10 tölur í skránna
    for(int i = 0; i < 10 ; i++)
    {
        writeNumberToFile(fout);
    }
    
    // Lokum straumnum/skránni.
    fout.close();
    
    // ======= SÝNIDÆMI 2 ==========
    
    // Ætlum að lesa úr skránni, þurfum að hafa ifstream
    ifstream fin;
    openFile(fin, filename);
    printNumberFromFile(fin);
    // Þurfum að loka skránni alltaf á milli til að geta notað hana aftur
    // Þegar við prentum út öll stökin í skránni þá erum við komin í endann á henni.
    // Þurfum að loka og opna skránna aftur til að komast aftur í byrjun á skránni.
    fin.close();
    
    // ======= DÆMI 2 ==========
    // Opnum skránna aftur því nú viljum við finna summu allra stakanna í skránni
    // ATH, ekki hægt að opna straum sem er þegar opinn, þess vegna lokum við á milli.
    openFile(fin, filename);
    int summa = sumOfNumbers(fin);
    cout << "Summa : " << summa << endl;
    // Lokum skránni því við viljum fara í byrjun á skránni til að finna hæðsta gildið
    fin.close();
    
    // Opnum skránna aftur til að komast í byrjun á skránni
    openFile(fin, filename);
    int maxVal = maxValue(fin);
    cout <<  "Hæðsta gildi: " << maxVal << endl;
    // Lokum skránni því við viljum fara í byrjun á skránni til að finna lægsta gildið
    fin.close();
    
    // Opnum skránna aftur til að komast í byrjun á skránni
    openFile(fin, filename);
    int minVal = minValue(fin);
    cout << "Minnsta gildi: " << minVal << endl;
    // Lokum skránni. Erum Hætt að nota hana :).
    fin.close();
    return 0;
}

/* ================= SÝNIDÆMI 1 ===================== */
/*  Fall sem tekur inn skráarstaum sem getur skrifað í skrá(ofstream) og
    nafn á skrá sem á að opna(string).
    Fallið opnar skránna. Ef það tekst ekki prentar það út villuskilaboð og forritið hættir(exit(1))
 */
void openFile(ofstream& fout, string filename)
{
    // Opnum skránna filename.
    // Þurfum að gera .c_str() útaf open fallið tekur við c-string en ekki stirng
    // open er innbyggt fall í #include<fstream>
    fout.open(filename.c_str());
    
    // Athugum hvort tókst að opna skrá.
    // fail() skilar true ef það tókst ekki, en skilar false ef það tókst
    // fail() er innbyggt fall í #include<fstream>
    if(fout.fail())
    {
        cout << "tókst ekki að opna skrá" << endl;
        exit(1); // þurfum að gera #include <cstdlib> til að geta notað exit
    }
}

/*  Fall sem tekur inn skráarstraum sem getur skrifað í skrá(ofstream).
    Fallið les inn tölu frá notenda og skrifar töluna í skránna. */
void writeNumberToFile(ofstream& fout)
{
    // Athuga hvort skrain se opin. Innbyggt fall í #include<fstream>
    if(fout.is_open())
    {
        int number;
        // Fá tölu frá notenda
        cin >> number;
        
        // Skrifa töluna í skránna, ath sama format og cout
        // cout << number << endl; ef við ætlum að prenta á sjá
        fout << number << endl;
    }
}

/* ================= SÝNIDÆMI 2 ===================== */

/*  Fall sem tekur inn skráarstaum sem getur lesið úr skrá(ifstream) og
    nafn á skrá sem á að opna(string).
    Fallið opnar skránna. Ef það tekst ekki prentar það út villuskilaboð og forritið hættir(exit(1))
 */
void openFile(ifstream& fin, string filename)
{
    // Opnum skránna filename.
    // Þurfum að gera .c_str() útaf open fallið tekur við c-string en ekki stirng
    // open er innbyggt fall í #include<fstream>
    fin.open(filename.c_str());
    
    // Athugum hvort tókst að opna skrá.
    // fail() skilar true ef það tókst ekki, en skilar false ef það tókst
    // fail() er innbyggt fall í #include<fstream>
    if(fin.fail())
    {
        cout << "tókst ekki að opna skrá" << endl;
        exit(1); // þurfum að gera #include <cstdlib> til að geta notað exit
    }
}

/*  Fall sem tekur inn skráarstraum sem getur lesið úr skrá(ifstream).
    Fallið prentar út allar tölurnar úr skránni á skjáinn. */
void printNumberFromFile(ifstream& fin)
{
    // Athuga hvort skrain se opin. Innbyggt fall í #include<fstream>
    if(fin.is_open())
    {
        int number;
        // Á meðan það er eitthvað til að lesa úr í skránni þá lesum við gildið í breytuna number
        while(fin >> number)
        {
            cout << number << endl;
        }
    }
}

/* ================= DÆMI 2 ===================== */

/*  Fall sem tekuri inn skráarstaum sem getur lesið úr skrá(ifstream).
    Skilar summu allra stakanna í skránni(int) */
int sumOfNumbers(ifstream& fin)
{
    // Mikilvægt að upphafsstilla sum breytu sem 0. Annars getum við fengið ranga niðurstöðu.
    int sum = 0;
    
    int number;
    // Á meðan það er eitthvað til að lesa úr í skránni þá lesum við gildið í breytuna number
    while(fin >> number)
    {
        // Bætum number alltaf við summuna.
        // Ef sum er ekki upphafsstillt sem 0 þá gætum við verið að plúsa við eitthvað
        // rusl sem var í breytunni fyrir.
        sum = sum + number;
    }
    return sum;
}

/*  Fall sem tekur inn skráarstaum sem getur lesið úr skrá(ifstream).
    Skilar stæðasta gildinu úr skránni(int) */
int maxValue(ifstream &fin)
{
    int maxVal;
    // Til að byrja með er fyrsta stakið í skránni stæðasta gildið
    fin >> maxVal;
    
    int number = 0;
    // Á meðan það er eitthvað til að lesa úr í skránni þá lesum við gildið í breytuna number
    while(fin >> number)
    {
        if(number > maxVal)
        {
            // Uppfærum maxVal ef við finnum stærri tölu
            maxVal = number;
        }
    }
    
    // Skilum stæðsta gildinu
    return maxVal;
}

/*  Fall sem tekuri inn skráarstaum sem getur lesið úr skrá(ifstream).
    Skilar minnsta gildinu úr skránni (int) */
int minValue(ifstream &fin)
{
    int minVal;
    // Til að byrja með er fyrsta stakið í skránni minnsta gildið
    fin >> minVal;
    
    int number = 0;
    // Á meðan það er eitthvað til að lesa úr í skránni þá lesum við gildið í breytuna number
    while(fin >> number)
    {
        if(number < minVal)
        {
            // Uppfærum minCal ef við finnum minni tölu
            minVal = number;
        }
    }
    // Skilum minnsta gildinu
    return minVal;
}