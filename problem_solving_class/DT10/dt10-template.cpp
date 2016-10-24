#include <iostream>
#include <cmath>

using namespace std;

class DoubleArray{
public:
    DoubleArray(); // Færibreytulaus smiður
    DoubleArray(int initSize, double initVal); // Smiður með færibreytum
    DoubleArray(const DoubleArray &copyMe); // Afritunarsmiður
    ~DoubleArray(); // Destructor

    void operator =(const DoubleArray &sameAsMe); // Gildisveiting

    double avg();
    double std();

    friend double operator+(DoubleArray &lhs, DoubleArray &rhs);
    friend bool operator>(DoubleArray &lhs, DoubleArray &rhs);

    friend ostream& operator<<(ostream &out, DoubleArray &da);
    friend istream& operator>>(istream &in, DoubleArray &da);
private:
    double *arr;
    int size;
};

int main () {
    // DoubleArray DA1 , DA2 (5 , 3.7) ;

    // cin >> DA1 ;
    // cout << " DA1 : " << DA1 << endl ;
    // cout << " DA2 : " << DA2 << endl ;

    // cin >> DA2 ;
    // cout << " DA1 + DA2 = " << DA1 + DA2 << endl ;

    // if ( DA1 > DA2 ) {
    //     cout << " DA1 has the highest average ! " << endl ;
    // }
    // else {
    //     cout << " DA2 has the highest average ! " << endl ;
    // }

    // DoubleArray DA3 ( DA1 ) , DA4 = DA1 ;

    // cout << " DA1 : " << endl ;
    // cout << DA1 << endl << endl ;

    // cout << " DA3 : " << endl ;
    // cout << DA3 << endl << endl ;

    // cout << " DA4 : " << endl ;
    // cout << DA4 << endl ;


    return 0;
}

// Færibreytulaus smiður
DoubleArray::DoubleArray(){
}

// Smiður með færibreytum
DoubleArray::DoubleArray(int initSize, double initVal){
}

// Afritunarsmiður
DoubleArray::DoubleArray(const DoubleArray &copyMe){
}

// Destructor
DoubleArray::~DoubleArray(){
}

// Gildisveiting
void DoubleArray::operator =(const DoubleArray &sameAsMe){
}

double DoubleArray::avg(){
    return 0;
}

double DoubleArray::std(){
    return 0;
}

double operator+(const DoubleArray &lhs, const DoubleArray &rhs){
    return 0;
}

double operator>(const DoubleArray &lhs, const DoubleArray &rhs){
    return 0;
}

ostream& operator<<(ostream &out, const DoubleArray &da){
    return out;
}

istream& operator>>(istream &in, DoubleArray &da){
    return in;
}
