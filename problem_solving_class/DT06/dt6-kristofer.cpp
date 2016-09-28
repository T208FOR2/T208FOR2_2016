#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

// Lausn vi� d�mi 1
void daemi1();

// F�ll fyrir d�mi 2
void openFile(ifstream &inp, string fname);
void openFileToWrite(ofstream &out, string fname);
void readFile(ifstream &inp);

int main()
{
    // D�mi 2

    // Opna file-straum til a� lesa skr�
    ifstream inp;
    openFile(inp, "songlist.txt");

    // Kalla � falli� sem h�ndlar g�gnin
    readFile(inp);

    inp.close();

    return 0;
}

void readFile(ifstream &inp)
{
    // Opna straum til a� skrifa � skr�
    ofstream out;
    openFileToWrite(out, "songlist2.txt");

    // Nota str til a� geyma l�nur � skr�nni
    string str;

    // S�ki fyrstu l�nu, finn sk�strikin og tek �au �t
    getline(inp, str);
    unsigned int pos = str.find_first_of("//");
    // ATH: pos + 2 af �v� a� �a� eru 2 sk�strik
    str = str.substr(pos + 2, str.length());

    // Prenta fyrstu l�nu �t � skr�
    out << str << endl;

    while(getline(inp, str))
    {
        // Tek �t n�mer
        pos = str.find_first_of(".");
        str = str.substr(pos + 1, str.length());

        // Tek �t ni�urstrik
        pos = str.find("_");
        while(pos < str.length())
        {
            // ATH: H�r �arf �g a� b�ta bilinu vi�, kemur ekki sj�lfkrafa
            //      Sko�a l�ka hvernig pos er nota�
            str = str.substr(0, pos) + " " + str.substr(pos + 1, str.length());
            pos = str.find("_", pos + 1);
        }

        // Taka �t .MP3
        pos = str.find_last_of(".");
        str = str.substr(0, pos);

        // �nnur lei� er a� nota erase � sta� substr
        // str = str.erase(pos, str.length());

        out << str << endl;
    }

    out.close();
}

void openFile(ifstream &inp, string fname)
{
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout << "failed to open input file" << endl;
        exit(1);
    }
}
void openFileToWrite(ofstream &out, string fname)
{
    out.open(fname.c_str());
    if(out.fail())
    {
        cout << "failed to open output file" << endl;
        exit(1);
    }
}

void daemi1()
{
    string input, word;

    // Tek inn streng (heila l�nu)
    cout << "Sladu inn streng: ";
    getline(cin, input);

    // Tek inn or� sem � a� leita a�
    cout << "Sladu in ord: ";
    cin >> word;

    // S�nid�mi, athuga hvort or� komi fyrir � texta
    // unsigned int pos = input.find(word);
    // if(pos > input.length()){
    //     cout << "fann ekki ord" << endl;
    // }
    // else {
    //     cout << "fann ordid" << endl;
    // }

    // Tel hversu oft or�i� kemur fyrir
    int counter = 0;
    // ATH: Mun � notkun 'unsigned int' og 'int'
    unsigned int pos = input.find(word);
    // while-lykkja gengur � me�an or� finnst
    while(pos < input.length())
    {
        counter++;
        pos = input.find(word, pos + 1);
    }
    cout << "count: " << counter << endl;
}
