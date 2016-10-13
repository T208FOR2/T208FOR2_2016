#include <iostream>

using namespace std;

struct Movie {
    string title;
    int year;
};

void printMovie(Movie m) {
    cout << m.title << " (" << m.year << ")";
}

int main()
{
    Movie m1, m2;

    m1.title = "Alien";
    m1.year = 1979;

    printMovie(m1);
    cout << endl;

    m2 = m1;
    printMovie(m2);
    cout << endl;

    return 0;
}
