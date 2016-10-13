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
    int n;
    cout << "How many movies do you own? ";
    cin >> n;
    cin.ignore();

    Movie *p = new Movie[n];
    for (int i = 0; i < n; i++) {
        p[i].getInfo();
        p[i].directedby = scott;
    }

    string lookup;
    cout << "What movie are you looking for? ";
    getline(cin, lookup);

    for (int i = 0; i < n; i++) {
        if (p[i].title == lookup) {
            cout << "This is the movie: " << endl;
            p[i].printMovie();
        }
    }

    delete [] p;
    return 0;
}
