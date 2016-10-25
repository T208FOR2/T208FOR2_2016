#include <iostream>
#include <cmath>

using namespace std;

class DoubleArray
{
public:
    DoubleArray(); // Færibreytulaus smiður
    DoubleArray(int initSize, double initVal); // Smiður með færibreytum
    DoubleArray(const DoubleArray &copyMe); // Afritunarsmiður
    ~DoubleArray(); // Destructor

    void operator =(const DoubleArray &sameAsMe); // Gildisveiting

    double avg() const;
    double std() const;

    friend DoubleArray operator+(const DoubleArray &lhs, const DoubleArray &rhs);
    friend bool operator>(const DoubleArray &lhs, const DoubleArray &rhs);

    friend ostream& operator<<(ostream &out, const DoubleArray &da);
    friend istream& operator>>(istream &in, DoubleArray &da);
private:
    double *arr;
    int size;
};

int main ()
{
     DoubleArray DA1, DA2(5, 3.7);

     cin >> DA1;
     cout << " DA1 : " << DA1 << endl ;
     cout << " DA2 : " << DA2 << endl ;

//     cin >> DA2 ;
//     cout << " DA1 + DA2 = " << DA1 + DA2 << endl ;

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
DoubleArray::DoubleArray()
{
    size = 0;
    arr = NULL;
}

// Smiður með færibreytum
DoubleArray::DoubleArray(int initSize, double initVal)
{
    size = initSize;
    arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = initVal;
    }
}

// Afritunarsmiður
DoubleArray::DoubleArray(const DoubleArray &copyMe)
{
}

// Destructor
DoubleArray::~DoubleArray()
{
    if(arr != NULL)
    {
        delete[] arr;
    }
}

// Gildisveiting
void DoubleArray::operator =(const DoubleArray &sameAsMe)
{
}

double DoubleArray::avg() const
{
    return 0;
}

double DoubleArray::std() const
{
    return 0;
}

DoubleArray operator+(const DoubleArray &lhs, const DoubleArray &rhs)
{
    return DoubleArray();
}

bool operator>(const DoubleArray &lhs, const DoubleArray &rhs)
{
    return false;
}

ostream& operator<<(ostream &out, const DoubleArray &da)
{
    for(int i = 0; i < da.size; i++)
    {
        out << da.arr[i] << " ";
    }
    out << endl;
    return out;
}

istream& operator>>(istream &in, DoubleArray &da)
{
    in >> da.size;
    if(da.arr == NULL)
    {
        da.arr = new double[da.size];
    }
    else
    {
        delete[] da.arr;
        da.arr = new double[da.size];
    }

    for(int i = 0; i < da.size; i++)
    {
        in >> da.arr[i];
    }
    return in;
}
