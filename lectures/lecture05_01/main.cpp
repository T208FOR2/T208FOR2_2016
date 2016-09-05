#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initialize_random_generator(int seed);
int random_int(int max_value);

int main()
{
    int seed = -1;
    //cin >> seed;
    initialize_random_generator(seed);

    int slembitala;

    for (int i = 0; i < 10; i++) {
        slembitala = random_int(100);
        cout << slembitala << " ";
    }
    cout << endl;

    return 0;
}


void initialize_random_generator(int seed) {
    if (seed < 0) {
        srand(static_cast<unsigned int>(time(NULL)) );
    }
    else {
        srand(seed);
    }
}

int random_int(int max_value) {
    return rand() % max_value;
}
