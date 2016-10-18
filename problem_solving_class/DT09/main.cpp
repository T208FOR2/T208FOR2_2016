#include <iostream>

using namespace std;

class SantaBag
{
public:
    SantaBag();
    string getName();
    void setName(string name);
    void lesa();
    void skrifaUt();
    friend ostream &operator<<( ostream &out, const SantaBag &bag);


private:
    string nafn;
    int hardir;
    int mjukir;

};

SantaBag::SantaBag()
{
    nafn = "";
    hardir = 0;
    mjukir = 0;
}

ostream &operator<<( ostream &out, const SantaBag &bag)
{
    out << "Nafn:" << bag.nafn << endl;
    out << "Hardir pakkar: " << bag.hardir << endl;
    out << "Mjukir pakkar: " << bag.mjukir << endl;
    return out;
}

void SantaBag::skrifaUt()
{
    cout << "Nafn :" << nafn << endl;
    cout << "Hardir pakkar: " << hardir << endl;
    cout << "Mjukir pakkar: " << mjukir << endl;
}

void SantaBag::lesa()
{
    cout << "Nafn: ";
    cin >> nafn;

    cout << "Harðid pakkar: ";
    cin >> hardir;

    cout << "Mjukir pakkar: ";
    cin >> mjukir;
}

void SantaBag::setName(string name)
{
    nafn = name;
}

string SantaBag::getName()
{
    return nafn;
}

int main()
{
    SantaBag sveinki1;
    sveinki1.skrifaUt();

    sveinki1.setName("Stufur");
    cout << sveinki1.getName() << endl;

    sveinki1.lesa();
    sveinki1.skrifaUt();

    cout << sveinki1 << endl;


    return 0;
}
