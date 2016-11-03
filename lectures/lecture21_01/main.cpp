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

    void addChild(Person* newChild);
};

void printFamily(Person* theperson, string addspace) {
    if (theperson == NULL) {
        return;
    }

    cout << addspace << theperson->nafn << endl;
    printFamily(theperson->firstChild, addspace+"  ");
    printFamily(theperson->nextSibling, addspace);
}

int main()
{
    Person* Steve;
    Person* newguy;
    Person* tmpperson;

    Steve = new Person("Steve Rogers");

    newguy = new Person("Peter Parker");
    Steve->addChild(newguy);
    newguy->addChild(new Person("Eddie Brock"));
    newguy->addChild(new Person("Mary Jane Watson"));
    tmpperson = new Person("Norman Osborne");
    newguy->addChild(tmpperson);
    tmpperson->addChild(new Person("Harry Osborne"));

    newguy = new Person("Clark Kent");
    newguy->addChild(new Person("Lois Lane"));
    newguy->addChild(new Person("Lex Luthor"));
    Steve->addChild(newguy);
    Steve->lastChild->lastChild->addChild(new Person("Lex Luthor, Jr. "));

    newguy = new Person("Bruce Wayne");
    newguy->addChild(new Person("Dick Grayson"));
    tmpperson = new Person("Jim Gordon");
    tmpperson->addChild(new Person("Barbara Gordon"));
    newguy->addChild(tmpperson);
    Steve->addChild(newguy);
    Steve->lastChild->addChild(new Person("Bane"));
    newguy->addChild(new Person("Oswald Chesterfield Cobblepot"));

    cout << endl << endl;
    printFamily(Steve, "");
    cout << endl << endl;

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

void Person::addChild(Person* newChild) {
    newChild->prevSibling = lastChild;

    if (lastChild != NULL) {
        lastChild->nextSibling = newChild;
    }

    lastChild = newChild;

    if (firstChild == NULL) {
        firstChild = newChild;
    }

    newChild->parent = this;
}




