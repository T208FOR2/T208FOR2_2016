#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* searchlinkedlist(Node* head, int value);

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
    tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }

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






