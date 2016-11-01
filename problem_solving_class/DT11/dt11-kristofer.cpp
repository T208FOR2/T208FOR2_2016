#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

typedef Node* NodePtr;

void tail_insert(NodePtr &head, int number);
NodePtr createNode(int number);
void print(NodePtr head);
void delete_list(NodePtr head);
int get_last(NodePtr head);
bool contains(NodePtr head, int findme);

int main()
{
    NodePtr head = NULL;
    int n, find, number;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        tail_insert(head, number);
    }
    cout << "Data in list : ";
    print(head);
    cout << "Second print: ";
    print(head);

    cout << "Data in back: " << get_last(head) << endl;

    cin >> find;
    if(contains(head, find))
    {
        cout << "The number " << find << " is in the list" << endl;
    }
    else
    {
        cout << "The number " << find << " is not in the list" << endl;
    }

    delete_list(head);
    return 0;
}

void tail_insert(NodePtr &head, int number)
{
    NodePtr newNode = createNode(number);
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        NodePtr last = head;
        // Finna aftasta
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = newNode;
    }
}

NodePtr createNode(int number)
{
    NodePtr newNode = new Node();
    newNode->data = number;
    newNode->next = NULL;
    return newNode;
}

void print(NodePtr head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void delete_list(NodePtr head)
{
    while(head != NULL)
    {
        NodePtr tmp = head;
        head = head->next;
        delete tmp;
    }
}

int get_last(NodePtr head)
{
    while(head->next != NULL)
    {
        head = head->next;
    }
    return head->data;
}

bool contains(NodePtr head, int findme)
{
//    bool inList = false;
    while(head != NULL)
    {
        if(findme == head->data)
        {
//            inList = true;
            return true;
        }
        head = head->next;
    }
    return false;
}
