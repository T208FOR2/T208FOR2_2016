#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, word;
    cout << "Sladu inn streng: ";
    getline(cin, input);

    cout << "Sladu in ord: ";
    cin >> word;

    unsigned int pos = input.find(word);
    if(pos > input.length()){
        cout << "fann ekki ord" << endl;
    }
    else {
        cout << "fann ordid" << endl;
    }

    int pos2 = input.find(word);
    if(pos2 < 0){
        cout << "fann ekki ord" << endl;
    }
    else {
        cout << "fann ordid" << endl;
    }

    return 0;
}
