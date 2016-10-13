#include <iostream>

using namespace std;

struct Director {
    string name;
    int birthyear;
};

struct Movie {
    string title;
    int year;
    Director directedby;
};


void printMovie(Movie m) {
    cout << m.title << " (" << m.year << ")";
}

void testfunc(Movie &m) {
    m.year = 9999;
    m.title = "This thing has changed...!";
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
