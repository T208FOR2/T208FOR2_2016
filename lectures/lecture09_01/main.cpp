#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

const int MAX_WORDS = 100000;

void open_file(ifstream &infile, string thefilename);

int main()
{
    ifstream infile;
    string thefilename = "grimm.txt";
    //cin >> thefilename;
    open_file(infile, thefilename);

    string uniquewords[MAX_WORDS];
    string s;
    int fjoldi_unique_words = 0;

    while (infile >> s) {
        bool word_seen = false;
        for (int i = 0; i < fjoldi_unique_words; i++) {
            if (uniquewords[i] == s) {
                word_seen = true;
            }
        }
        if (!word_seen) {
            uniquewords[fjoldi_unique_words] = s;
            fjoldi_unique_words++;
        }
    }

    for (int i = 0; i < fjoldi_unique_words; i++) {
        cout << uniquewords[i] << endl;
    }
    cout << "Number of unique words: " << fjoldi_unique_words << endl;

    infile.close();
    return 0;
}

void open_file(ifstream &infile, string thefilename) {
    infile.open(thefilename.c_str());
    if (infile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

