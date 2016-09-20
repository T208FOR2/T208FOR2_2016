#include <iostream>

using namespace std;

int main()
{
    int mm = 0, cm = 0, m = 0, km = 0;
    bool first = true;

    cin >> mm;
    if( mm > 1000000)
    {
        km = mm / 1000000;
        mm = mm % 1000000;
        if(!first)
        {
            cout <<", ";
        }
        if(km != 0)
        {
            cout << km << " km";
        }
        first = false;
    }
    if( mm > 1000)
    {
        m = mm / 1000;
        mm = mm % 1000;
        if(!first)
        {
            cout <<", ";
        }
        if( m != 0)
        {
            cout << m << " m";
        }
        first = false;
    }
    if( mm > 10)
    {
        cm = mm / 10;
        mm = mm % 10;
        if(!first)
        {
            cout <<", ";
        }
        if( cm != 0)
        {
            cout << cm << " cm";
        }
        first = false;
    }
    if( mm != 0)
    {
        if(!first)
        {
            cout <<", ";
        }
        cout << mm << " mm";
        first = false;
    }
    cout <<".";

    return 0;
}
