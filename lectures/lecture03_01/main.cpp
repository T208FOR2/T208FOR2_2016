#include <iostream>

using namespace std;

int main()
{
    int numberofhellos;
    cin >> numberofhellos;

    int counter = 0;

    while (counter < numberofhellos) {
        cout << "Hello! - " << counter++ << endl;
    }

    return 0;
}
