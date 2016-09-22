#include <iostream>
#include <fstream>
using namespace std;

const int MAXFJOLDI = 100;

int reiknafjoldi(string namsbraut[], int ar[], int kvk[], int kk[], int n, string valinnamsbraut, int validar)

int main()
{
    string namsbraut[], int ar[], int kvk[], int kk[]
    int minar = finnaminnstaar(ar);
    int maxar = finnastaerstaar(ar);
    int fjoldi;
    for (int i = minar; i <= maxar; i++)
    {
        fjoldi = reiknafjoldi(nams, ar, kk, kvk, valinnamsbraut, i);
        cout << i << ": " << fjoldi << endl;
    }


    ifstream infile;
    infile.open("test.txt");
    string strengur[MAXFJOLDI];
    int tala[MAXFJOLDI];
    int notud_stok = 0;

    string s;
    for (int i = 0; i < 4; i++) {
        infile >> s;
    }

    while (infile >> strengur[notud_stok] && infile >> tala[notud_stok]) {
        notud_stok++;
    }

    for (int i = 0; i < notud_stok; i++) {
        cout << strengur[i] << " - " << tala[i] << endl;
    }
    infile.close();
    return 0;
}
