#include <iostream>

using namespace std;

class SantaBag
{
public:
    SantaBag();
    SantaBag(string name, int hard, int soft);
    string getName();
    void setName(string name);
    void lesa();
    void skrifaUt();

    friend ostream &operator<<( ostream &out, const SantaBag &bag);
    friend istream &operator>>( istream &in, SantaBag &bag);

    friend bool operator>(const SantaBag &lhs, const SantaBag &rhs );
    friend bool operator>=(const SantaBag &lhs, const SantaBag &rhs );
    friend bool operator<(const SantaBag &lhs, const SantaBag &rhs );
    friend bool operator==(const SantaBag &lhs, const SantaBag &rhs );



private:
    string nafn;
    int hardir;
    int mjukir;

    double reiknaGildi() const;

};

SantaBag::SantaBag()
{
    nafn = "";
    hardir = 0;
    mjukir = 0;
}

SantaBag::SantaBag(string name, int hard, int soft)
{
    nafn = name;
    hardir = hard;
    mjukir = soft;
}

ostream &operator<<( ostream &out, const SantaBag &bag)
{
    out << "Nafn:" << bag.nafn << endl;
    out << "Hardir pakkar: " << bag.hardir << endl;
    out << "Mjukir pakkar: " << bag.mjukir << endl;
    return out;
}

istream &operator>>( istream &in, SantaBag &bag)
{
    cout << "Nafn: ";
    in >> bag.nafn;

    cout << "Harğid pakkar: ";
    in >> bag.hardir;

    cout << "Mjukir pakkar: ";
    in >> bag.mjukir;

    return in;
}

bool operator>(const SantaBag &lhs, const SantaBag &rhs )
{
    double lhsVal = lhs.reiknaGildi();
    double rhsVal = rhs.reiknaGildi();
    if(lhsVal > rhsVal)
    {
        return true;
    }
    return false;
}

bool operator>=(const SantaBag &lhs, const SantaBag &rhs )
{
    double lhsVal = lhs.reiknaGildi();
    double rhsVal = rhs.reiknaGildi();
    if(lhsVal >= rhsVal)
    {
        return true;
    }
    return false;
}

bool operator==(const SantaBag &lhs, const SantaBag &rhs )
{
    double lhsVal = lhs.reiknaGildi();
    double rhsVal = rhs.reiknaGildi();
    if(lhsVal == rhsVal)
    {
        return true;
    }
    return false;
}

bool operator<(const SantaBag &lhs, const SantaBag &rhs )
{
    double lhsVal = lhs.reiknaGildi();
    double rhsVal = rhs.reiknaGildi();
    if(lhsVal < rhsVal)
    {
        return true;
    }
    return false;
}

double SantaBag::reiknaGildi() const
{
    return (hardir + mjukir*0.6);
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

    cout << "Harğid pakkar: ";
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
    SantaBag sveinki1("Sveinki1",1,2);
    //sveinki1.skrifaUt();

    //sveinki1.lesa();
    //cout << sveinki1 << endl;

    SantaBag sveinki2("Sveinki2",1,2);
    //cout << sveinki2;

   // cin >> sveinki2;
    cout << sveinki2;
    cout << sveinki1;

    if(sveinki1 > sveinki2)
    {
        cout << "Sveinki1" << endl;
    }
    else if( sveinki1 < sveinki2)
    {
        cout << "sveinki1 < sveinki2" << endl;
    }
    else
    {
        cout << "Sveinki2" << endl;
    }

    if(sveinki1 == sveinki2)
    {
        cout << " Eins" << endl;
    }

    if(sveinki1 >= sveinki2)
    {
        cout << "Sveinki2 >= Sveinki2" << endl;
    }

    return 0;
}
