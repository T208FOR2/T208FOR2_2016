#include <iostream>

using namespace std;

class Person {
public:
    string nafn;

    Person* firstChild;
    Person* lastChild;

    Person* nextSibling;
    Person* prevSibling;

    Person* parent;

    Person();
    Person(string personname);
};


int main()
{


    return 0;
}

Person::Person() {
    parent = NULL;
    prevSibling = NULL;
    nextSibling = NULL;
    firstChild = NULL;
    lastChild = NULL;
    nafn = "";
}

Person::Person(string personname) {
    parent = NULL;
    prevSibling = NULL;
    nextSibling = NULL;
    firstChild = NULL;
    lastChild = NULL;
    nafn = personname;
}
