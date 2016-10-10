#include <iostream>

using namespace std;

int* fasteignasala(int *heimili, int &herbergi);
void fasteignasala(int* &heimili, int &herbergi);

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

    // Need a bigger place!
    heimili = fasteignasala(heimili, herbergi);

    delete [] heimili;
    heimili = NULL;

    cout << "After delete ------------" << endl;
    heimili[herbergi-1] = 42;
    cout << heimili[herbergi-1] << endl;

    return 0;
}

int* fasteignasala(int *heimili, int &herbergi) {
    int* nytt_heimili = new int[2*herbergi];
    for (int i = 0; i < herbergi; i++) {
        nytt_heimili[i] = heimili[i];
        nytt_heimili[herbergi+i] = heimili[i];
    }

    delete [] heimili;
    herbergi = herbergi * 2;

    return nytt_heimili;
}

void fasteignasala(int* &heimili, int &herbergi) {
    int* nytt_heimili = new int[herbergi+1];
    for (int i = 0; i < herbergi; i++) {
        nytt_heimili[i] = heimili[i];
    }
    nytt_heimili[herbergi++] = 42;

    delete [] heimili;

    heimili = nytt_heimili;
}



