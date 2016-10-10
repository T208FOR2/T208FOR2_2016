#include <iostream>

using namespace std;



int main()
{
    int *heimili = NULL;
    int herbergi;
    cin >> herbergi;

    heimili = new int[herbergi];

    for (int i = 0; i < herbergi; i++) {
        cin >> heimili[i];
    }

    for (int i = 0; i < herbergi; i++) {
        cout << heimili[i] << " ";
    }

    delete heimili;

    return 0;
}
