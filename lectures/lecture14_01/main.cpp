#include <iostream>

using namespace std;

int* fasteignasala1(int *heimili, int &herbergi);
void fasteignasala2(int* &heimili, int &herbergi);

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
    heimili = fasteignasala1(heimili, herbergi);
    fasteignasala2(heimili, herbergi);

    delete [] heimili;
    heimili = NULL;

    return 0;
}

int* fasteignasala1(int *heimili, int &herbergi) {
    int* nytt_heimili = new int[2*herbergi];
    for (int i = 0; i < herbergi; i++) {
        nytt_heimili[i] = heimili[i];
        nytt_heimili[herbergi+i] = heimili[i];
    }

    delete [] heimili;
    herbergi = herbergi * 2;

    return nytt_heimili;
}

void fasteignasala2(int* &heimili, int &herbergi) {
    int* nytt_heimili = new int[herbergi+1];
    for (int i = 0; i < herbergi; i++) {
        nytt_heimili[i] = heimili[i];
    }
    nytt_heimili[herbergi++] = 42;

    delete [] heimili;

    heimili = nytt_heimili;
}



