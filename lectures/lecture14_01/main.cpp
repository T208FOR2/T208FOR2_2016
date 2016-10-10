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
    cout << endl;

    delete [] heimili;

    cout << "After delete ------------" << endl;
    cout << heimili[herbergi-1] << endl;

    return 0;
}
