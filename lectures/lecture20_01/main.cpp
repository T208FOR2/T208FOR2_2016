#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

int main()
{
    Node *head = NULL;
    Node *tmp;

    for (int i = 0; i < 10; i++) {
        tmp = new Node;
        tmp->data = i;

        tmp->next = head;
        head = tmp;
    }


    return 0;
}
