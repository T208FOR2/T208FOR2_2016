#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

const int MAX_WORDS = 100000;

void insertionSort(int teljari[], string words[], int length);

void read_unique_words(ifstream &infile, string uniquewords[], int wordcount[], int &fjoldi_unique_words);
void open_file(ifstream &infile, string thefilename);

int main()
{
    ifstream infile;
    string thefilename = "grimm.txt";
    //cin >> thefilename;
    open_file(infile, thefilename);

    string uniquewords[MAX_WORDS];
    int uniquewordcount[MAX_WORDS];
    int fjoldi_unique_words = 0;

    read_unique_words(infile, uniquewords, uniquewordcount, fjoldi_unique_words);

    insertionSort(uniquewordcount, uniquewords, fjoldi_unique_words);

    for (int i = 0; i < 10; i++) {
        cout << uniquewords[i] << " - " << uniquewordcount[i] << endl;
    }
    cout << "Number of unique words: " << fjoldi_unique_words << endl;

    infile.close();
    return 0;
}

void insertionSort(int teljari[], string words[], int length) {
  int i, j, tmp;
  string tmp_word;

  for (i = 1; i < length; i++) {
    tmp = teljari[i];
    tmp_word = words[i];
    j = i;
    while (j > 0 && teljari[j - 1] < tmp) {
      teljari[j] = teljari[j - 1];
      words[j] = words[j - 1];
      j--;
    }
    teljari[j] = tmp;
    words[j] = tmp_word;
  }
}

void read_unique_words(ifstream &infile, string uniquewords[], int wordcount[], int &fjoldi_unique_words) {
    string s;
    while (infile >> s) {
        int word_index = -1;
        for (int i = 0; i < fjoldi_unique_words; i++) {
            if (uniquewords[i] == s) {
                word_index = i;
            }
        }
        if (word_index == -1) {
            uniquewords[fjoldi_unique_words] = s;
            wordcount[fjoldi_unique_words] = 1;
            fjoldi_unique_words++;
        }
        else {
            wordcount[word_index]++;
        }
    }
}

void open_file(ifstream &infile, string thefilename) {
    infile.open(thefilename.c_str());
    if (infile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

