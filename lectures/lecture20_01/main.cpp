#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void printlinkedlist(Node* head);
Node* searchlinkedlist(Node* head, int value);
void insertintolinkedlist(Node* afterme, int value);
void deletefromlinkedlist(Node* delafterme);

int main()
{
    Node *head = NULL;
    Node *tmp;

    // add 10 elements to the list
    for (int i = 0; i < 10; i++) {
        tmp = new Node;
        tmp->data = i;

        tmp->next = head;
        head = tmp;
    }

    // print out the linked list
    cout << "-------------" << endl;
    printlinkedlist(head);

    tmp = searchlinkedlist(head, 6);
    if (tmp != NULL) {
        cout << "Found this node: " << tmp->data << endl;
        insertintolinkedlist(tmp, 42);
    }
    else {
        cout << "Sorry, didn't find anything..." << endl;
    }

    cout << "-------------" << endl;
    printlinkedlist(head);

    tmp = searchlinkedlist(head, 2);
    if (tmp != NULL) {
        deletefromlinkedlist(tmp);
    }

    cout << "-------------" << endl;
    printlinkedlist(head);

    // add node a the beginning:
    tmp = new Node;
    tmp->data = 999;
    tmp->next = head;
    head = tmp;

    // add node a the end
    tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new Node;
    tmp->next->data = -1;
    tmp->next->next = NULL;


    cout << "-------------" << endl;
    printlinkedlist(head);

    // delete the linked list
    while (head != NULL) {
        tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}


Node* searchlinkedlist(Node* head, int value) {
    Node* tmp = head;
    while (tmp != NULL && tmp->data != value) {
        tmp = tmp->next;
    }

    return tmp;
}

void printlinkedlist(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
}

void insertintolinkedlist(Node* afterme, int value) {
    Node* tmp = new Node;
    tmp->data = value;

    tmp->next = afterme->next;
    afterme->next = tmp;
}

void deletefromlinkedlist(Node* delafterme) {
    Node* tmp = delafterme->next;
    delafterme->next = delafterme->next->next;
    delete tmp;
}



