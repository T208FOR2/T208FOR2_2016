#include <iostream>

using namespace std;
void switchWords(string &line, string wordToRemove, string wordToInsert );
void switchWords2(string &line, string wordToRemove, string wordToInsert );
void bigLetters(string& line);
string firstWord(string line);
string findLast(string line);
int main()
{
    string ord1, ord2, line;
    cin >> ord1 >> ord2;

    char bil;
    cin.get(bil);

    getline(cin, line);
    switchWords2(line, ord1, ord2);
    bigLetters(line);
    cout << line << endl;
    cout << firstWord(line) << endl;
    cout << findLast(line) << endl;
    return 0;
}

string firstWord(string line)
{
    string word;
    unsigned int pos;
    pos = line.find(" ");
    if(pos < line.length())
    {
        word = line.substr(0,pos);
    }
    else
    {
        word = line;
    }
    return word;
}

string findLast(string line)
{
    string word;
    unsigned int pos;
    pos = line.find_last_of(" ");
    if( pos < line.length())
    {
        word = line.substr(pos + 1);
    }
    else
    {
        word = line;
    }
    return word;
}

void bigLetters(string& line)
{
    line[0] = toupper(line[0]);

    unsigned int pos;
    pos = line.find_first_of(" ");
    while(pos < line.length())
    {
        line[pos + 1] = toupper(line[pos + 1]);
        pos = line.find_first_of(" ", pos + 1);
    }
}

void switchWords(string &line, string wordToRemove, string wordToInsert )
{
    unsigned int pos;
    pos = line.find(wordToRemove);
    while(pos < line.length())
    {
        line.erase(pos,wordToRemove.length());
        line.insert(pos, wordToInsert);
        pos = line.find(wordToRemove);
    }
}

void switchWords2(string &line, string wordToRemove, string wordToInsert )
{
    unsigned int pos;
    pos = line.find(wordToRemove);
    while(pos < line.length())
    {
        string front_ = line.substr(0, pos);
        string back_ = line.substr(pos + wordToRemove.length());
        line = front_ + wordToInsert + back_;
        pos = line.find(wordToRemove);
    }
}






