#include <iostream>

using namespace std;

int main()
{
    int numberofhellos;
    cin >> numberofhellos;

    int counter = 0;
    bool firstiteration = true;

    while (counter < numberofhellos || firstiteration) {
        cout << "Hello! - " << counter++ << endl;
    }

    return 0;
}
