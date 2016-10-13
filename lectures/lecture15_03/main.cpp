#include <iostream>

using namespace std;

struct Director {
    string name;
    int birthyear;
};

class Movie {
public:
    string title;
    int year;
    Director directedby;

    void printMovie();
    void getInfo();
private:
};

void Movie::printMovie() {
    cout << "<<<<I'm part of the class!" << endl;
    cout << title << " (" << year << ")";
    cout << " - directed by " << directedby.name;
    cout << ", born in " << directedby.birthyear << endl;
}

void printMovie(Movie m) {
    cout << "<<<<I'm outside the class..." << endl;
    cout << m.title << " (" << m.year << ")";
    cout << " - directed by " << m.directedby.name;
    cout << ", born in " << m.directedby.birthyear << endl;
}

int main()
{
    Director scott = {"Ridley Scott", 1937};
    Movie m1;

    m1.title = "Alien";
    m1.year = 1979;
    m1.directedby = scott;

    printMovie(m1);
    m1.printMovie();

    return 0;
}
