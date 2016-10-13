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

void Movie::getInfo() {
    cout << "Name of movie: ";
    getline(cin, title);
    cout << "Year: ";
    cin >> year;
    cin.ignore();
}

void Movie::printMovie() {
//    cout << "<<<<I'm part of the class!" << endl;
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

    m1.getInfo();
    m1.directedby = scott;

    m1.printMovie();

    return 0;
}
