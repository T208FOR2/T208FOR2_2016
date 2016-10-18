#include <iostream>

using namespace std;

class SantaBag
{
public:
    SantaBag();
    SantaBag(string n, int h, int m);

    void lesa();
    void skrifaUt();

    string getName();
    void setName(string n);

    friend ostream& operator <<(ostream& out, const SantaBag& sb);
    friend istream& operator >>(istream& in, SantaBag& sb);

    friend bool operator >(const SantaBag& lhs, const SantaBag& rhs);

private:
    string nafn;
    int hardir;
    int mjukir;
};


int main()
{
    // ============== //
    //   Sınidæmi 1   //
    // ============== //
    SantaBag sveinki1;
    sveinki1.lesa();

    cout << endl << "Skrifad ut med medlimafalli:" << endl;
    sveinki1.skrifaUt();
    cout << endl;

    SantaBag sveinki2;
    sveinki2.lesa();
    cout << endl << "Skrifad ut med vinafalli:" << endl;
    cout << sveinki2;


    // ========== //
    //   Dæmi 1   //
    // ========== //
    SantaBag sveinki3("Stufur", 2, 2);
    SantaBag sveinki4;

    cout << "Vinsamlega sladu inn nafn, fjolda hardra og fjolda mjukra: " << endl;
    cin >> sveinki4;

    if (sveinki3 > sveinki4)
    {
        cout << sveinki3.getName() << " er med betri poka en " << sveinki4.getName() << endl;
    }
    else
    {
        cout << sveinki4.getName() << " er med betri poka en " << sveinki3.getName() << endl;
    }
}

SantaBag::SantaBag()
{
    nafn = "";
    hardir = 0;
    mjukir = 0;
}

SantaBag::SantaBag(string n, int h, int m)
{
    nafn = n;
    hardir = h;
    mjukir = m;
}

string SantaBag::getName()
{
    return nafn;
}

void SantaBag::setName(string n)
{
    nafn = n;
}

void SantaBag::skrifaUt()
{
    cout << "Nafn: " << nafn << endl;
    cout << "Hardir: " << hardir << endl;
    cout << "Mjukir: " << mjukir << endl;
}

void SantaBag::lesa()
{
    cout << "Nafn: ";
    cin >> nafn;
    cout << "Hardir: ";
    cin >> hardir;
    cout << "Mjukir: ";
    cin >> mjukir;
}

istream& operator >>(istream& in, SantaBag& sb)
{
    cout << "Nafn: ";
    in >> sb.nafn;
    cout << "Hardir: ";
    in >> sb.hardir;
    cout << "Mjukir: ";
    in >> sb.mjukir;
    return in;
}

ostream& operator <<(ostream& out, const SantaBag& sb)
{
    out << "Nafn: " << sb.nafn << endl;
    out << "Hardir: " << sb.hardir << endl;
    out << "Mjukir: " << sb.mjukir << endl;
    return out;
}

bool operator >(const SantaBag& lhs, const SantaBag& rhs)
{
    double left, right;
    left = lhs.hardir + 0.6 * lhs.mjukir;
    right = rhs.hardir + 0.6 * rhs.mjukir;
    return left > right;
}
