#include <iostream>
#include <string>

using namespace std;
int countWords(string line, string word);

int main()
{
    string line;
    string word;

    getline(cin, line);
    cout << "Sladu inn ord:";
    cin >> word;

    unsigned int pos = line.find(word);
    if( pos < line.length())
    {
        cout << "Ordid \"" << word << "\" kemur fyrir i textanum" << endl;
        int count = countWords(line, word);
        cout << " Ordid kemur " << count << " sinnum fyrir i strengum" << endl;
    }
    else
    {
        cout << "Ordid \"" << word << "\" kemur ekki fyrir i textanum" << endl;
    }

    return 0;
}

int countWords(string line, string word)
{
    int counter = 0;
    unsigned int pos = line.find(word);
    while( pos < line.length())
    {
        counter++;
        pos = line.find(word, pos + 1);
    }
    return counter;
}
