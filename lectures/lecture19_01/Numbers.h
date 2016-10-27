
#include <iostream>
using namespace std;

class Numbers {
public:
    Numbers();  // default constructor
    ~Numbers();
    Numbers( const Numbers &cloneme );  // copy constructor

    void operator = (const Numbers &sameasme);  // assignment operator

    string separator;

    void append(int i);
    void insert(int i, int pos);
    void remove(int pos);
    int find(int key);
    int find(int key, int pos);

    int length() const { return n; };

    int& operator [] (int i) { return p[i]; };       // num[i] = 42;
    int operator [] (int i) const { return p[i]; };  // cout << num[i]

    friend ostream& operator << (ostream& outs, const Numbers &num);
private:
    int *p;
    int n;  // number of used elements
    int max_elements; // max length of the array

    void double_size_of_array();
};
