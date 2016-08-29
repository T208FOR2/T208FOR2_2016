#include <iostream>

using namespace std;

int main()
{
    int numberofhellos;
    cin >> numberofhellos;

    int counter = 0;

    do {
        cout << "do - hello - " << counter << endl;
        counter += 1;
    } while (counter < numberofhellos);


    while (counter < numberofhellos) {
        cout << "Hello! - " << counter++ << endl;
    }

    return 0;
}
