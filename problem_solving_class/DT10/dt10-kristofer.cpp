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
    double sum() const;

    double *arr;
    int size;
};

int main ()
{
    DoubleArray DA1, DA2(5, 3.7);

    cin >> DA1;
    cout << " DA1 : " << DA1 << endl ;
    cout << " DA2 : " << DA2 << endl ;

    cin >> DA2 ;
    cout << " DA1 + DA2 = " << DA1 + DA2 << endl ;

    if ( DA1 > DA2 )
    {
        cout << " DA1 has the highest average ! " << endl ;
    }
    else
    {
        cout << " DA2 has the highest average ! " << endl ;
    }

    DoubleArray DA3(DA1), DA4 = DA1;

    cout << " DA1 : " << endl ;
    cout << DA1 << endl << endl ;

    cout << " DA3 : " << endl ;
    cout << DA3 << endl << endl ;

    cout << " DA4 : " << endl ;
    cout << DA4 << endl ;

    DA4 = DA2;

    cout << "DA2: " << endl;
    cout << DA2 << endl;
    cout << "DA4: " << endl;
    cout << DA4 << endl;

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
    size = copyMe.size;
    arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = copyMe.arr[i];
    }
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
    size = sameAsMe.size;
    if(arr != NULL)
    {
        delete[] arr;
    }
    arr = new double[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = sameAsMe.arr[i];
    }
}

double DoubleArray::avg() const
{
    double avg = sum();
    return avg / size;
}

double DoubleArray::sum() const
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double DoubleArray::std() const
{
    double mean = avg();
    double std = 0;
    for(int i = 0; i < size; i++)
    {
        std += ((arr[i] - mean) * (arr[i] - mean));
    }
    std /= (size - 1);
    return sqrt(std);
}

DoubleArray operator+(const DoubleArray &lhs, const DoubleArray &rhs)
{
    DoubleArray newDA;
    newDA.size = lhs.size + rhs.size;
    newDA.arr = new double[newDA.size];

    // Færa úr vinstra fylki (lhs) í nýja fylki
    for(int i = 0; i < lhs.size; i++)
    {
        newDA.arr[i] = lhs.arr[i];
    }

    // Færa úr hægra fylki (rhs) í nýja fylki
    for(int i = 0; i < rhs.size; i++)
    {
        newDA.arr[i + lhs.size] = rhs.arr[i];
    }

    return newDA;
}

bool operator>(const DoubleArray &lhs, const DoubleArray &rhs)
{
    double lavg = lhs.avg(), ravg = rhs.avg();
    return lavg > ravg;
}

ostream& operator<<(ostream &out, const DoubleArray &da)
{
    out << endl;
    out << "n = " << da.size << ", ";
    out << "mean = " << da.avg() << ", ";
    out << "stddev = " << da.std() << endl;
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
