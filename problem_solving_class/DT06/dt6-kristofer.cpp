#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

// Lausn við dæmi 1
void daemi1();

// Föll fyrir dæmi 2
void openFile(ifstream &inp, string fname);
void openFileToWrite(ofstream &out, string fname);
void readFile(ifstream &inp);

int main()
{
    // Dæmi 2

    // Opna file-straum til að lesa skrá
    ifstream inp;
    openFile(inp, "songlist.txt");

    // Kalla í fallið sem höndlar gögnin
    readFile(inp);

    inp.close();

    return 0;
}

void readFile(ifstream &inp)
{
    // Opna straum til að skrifa í skrá
    ofstream out;
    openFileToWrite(out, "songlist2.txt");

    // Nota str til að geyma línur í skránni
    string str;

    // Sæki fyrstu línu, finn skástrikin og tek þau út
    getline(inp, str);
    unsigned int pos = str.find_first_of("//");
    // ATH: pos + 2 af því að það eru 2 skástrik
    str = str.substr(pos + 2, str.length());

    // Prenta fyrstu línu út í skrá
    out << str << endl;

    while(getline(inp, str))
    {
        // Tek út númer
        pos = str.find_first_of(".");
        str = str.substr(pos + 1, str.length());

        // Tek út niðurstrik
        pos = str.find("_");
        while(pos < str.length())
        {
            // ATH: Hér þarf ég að bæta bilinu við, kemur ekki sjálfkrafa
            //      Skoða líka hvernig pos er notað
            str = str.substr(0, pos) + " " + str.substr(pos + 1, str.length());
            pos = str.find("_", pos + 1);
        }

        // Taka út .MP3
        pos = str.find_last_of(".");
        str = str.substr(0, pos);

        // Önnur leið er að nota erase í stað substr
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

    // Tek inn streng (heila línu)
    cout << "Sladu inn streng: ";
    getline(cin, input);

    // Tek inn orð sem á að leita að
    cout << "Sladu in ord: ";
    cin >> word;

    // Sýnidæmi, athuga hvort orð komi fyrir í texta
    // unsigned int pos = input.find(word);
    // if(pos > input.length()){
    //     cout << "fann ekki ord" << endl;
    // }
    // else {
    //     cout << "fann ordid" << endl;
    // }

    // Tel hversu oft orðið kemur fyrir
    int counter = 0;
    // ATH: Mun á notkun 'unsigned int' og 'int'
    unsigned int pos = input.find(word);
    // while-lykkja gengur á meðan orð finnst
    while(pos < input.length())
    {
        counter++;
        pos = input.find(word, pos + 1);
    }
    cout << "count: " << counter << endl;
}
