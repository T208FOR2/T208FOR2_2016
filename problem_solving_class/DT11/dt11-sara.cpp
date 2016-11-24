
#include <iostream>


using namespace std;

struct Node
{
    int data;
    Node* next;
};

void print(Node* head);

Node* create_node(int number, Node* link);
Node* get_last(Node* head);
Node* get_node(Node* head, int number);

void head_insert(Node* &head, int number);
void head_insert_2(Node* &head, int number);

void tail_insert(Node* &head, int number);
void tail_insert_2(Node* &head, int number);

void insert_node(Node* afterMe, int number);

void insert_before_less(Node* &head, int number);

bool contains( Node* head, int number);
bool contains_2(Node* head, int number);

int count(Node* head);

void print_last(Node* head);
void print_last_2(Node* head);

void delete_list(Node* head);


int main()
{
    Node* head = NULL;
    int n, find, number;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        insert_before_less(head, number);
    }
    cout << "Data in list : ";
    print(head);
    cout << "Second print: ";
    print(head);
    
    cout << "Data in back: " << get_last(head)->data << endl;
    
    cin >> find;
    if(contains(head, find))
    {
        cout << "The number " << find << " is in the list" << endl;
    }
    else
    {
        cout << "The number " << find << " is not in the list" << endl;
    }
    
    cout << "Size of list: " << count(head) << endl;
    
    insert_before_less(head, 7);
    cout << "After head_insert: ";
    print(head);
    
    delete_list(head);
    return 0;
}

//----------------------------------- print ---------------------------------------

// Fall sem prentar út öll stökin úr listanum
void print(Node* head)
{
    // Látum temp benda á sama stað og head svo við tínum ekki head.
    Node* temp = head;
    
    // Erum komin útá endan á listanum þegar temp er NULL
    while(temp != NULL)
    {
        cout << (temp->data) << " ";
        // Látum temp vera næstu nóðu í listanum
        temp = temp -> next;
    }
    cout << endl;
}

//----------------------------------- createNode ---------------------------------------

// Fall sem býr til nýja nóðu sem hefur data = number og next = link.
Node* create_node(int number, Node* link)
{
    // Búum til nýja nóðu
    Node* newNode= new Node;
    
    // skilgreynum breytur nóðunnar sem number og link
    newNode -> data = number;
    newNode -> next = link;
    
    // skilum nóðunni
    return newNode;
}

//----------------------------------- getLast ---------------------------------------

// Fall sem skilar öftustu nóðunni í listanum
Node* get_last(Node* head)
{
    // Athugum hvort listinn sé tómur
    if( head == NULL)
    {
        // Ef hann er tómur skilum við NULL
        return NULL;
    }
    
    // Skilgreinum temp = head til að ítra í gegnum listann
    Node* temp = head;
    
    // Finnum öftustu nóðuna. Aftasta nóðan hefur þá eiginleika að next = NULL.
    while( temp->next != NULL)
    {
        temp = temp -> next;
    }
    
    return temp;
}

//----------------------------------- getNode ---------------------------------------

// Fall sem finnur nóðu með data = number. Ef engin nóða í listanum hefur það gildi
// skilar fallið NULL
Node* get_node(Node* head, int number)
{
    // ítrum okkur í gegnum listann
    for(Node* temp = head; temp != NULL; temp = temp->next)
    {
        // Ef nóða hefur gilið number þá skilum við nóðunni
        if(temp->data == number)
        {
            return temp;
        }
    }
    
    return NULL;
}


//----------------------------------- head_insert ---------------------------------------


// Fall sem bætir við fremst í listann
void head_insert(Node* &head, int number)
{
    // Búum til nýja nóðu
    Node* newNode= new Node;
    
    // Látum nóðuna hafa gildið number
    newNode -> data = number;
    
    // látum nóðuna banda á head
    newNode -> next = head;
    
    // færum head
    head = newNode;
}

// Gerir það sama og fallið head_insert nema notar fallið createNode
void head_insert_2(Node* &head, int number)
{
    // Fallið create_node skilar nýrri nóðu sem hefur gildið data = number og next = head
    Node *newNode = create_node(number, head);
    
    // færum head
    head = newNode;
}



//----------------------------------- tail_insert ---------------------------------------

// Fall sem bætir við aftart í listann
void tail_insert(Node* &head, int number)
{
    // athugum fyrst hvort listinn er tómur.
    if( head == NULL)
    {
        // ef listinn er tómur þá verður head ný nóða með data = number og next = NULL
        head = create_node(number, NULL);
        // hættum í fallinu
        return;
    }
    
    // Skilgreinum nýja nóðu sem hefur data = number og next = NULL
    Node* newNode = create_node(number, NULL);
    
    // Skilgreinum temp = head til að ítra okkur í gegnum listann
    Node* temp = head;
    
    // Finnum öftustu nóðuna
    while( temp->next != NULL)
    {
        temp = temp->next;
    }
    
    // tengjum nýju nóðuna aftast á listann
    temp->next = newNode;
    
}

// Sama og fallið tail_insert en þetta notar fallið getLast til að finna öftustu nóðuna
void tail_insert_2(Node* &head, int number)
{
    // Athugum hvort listinn sé tómur. Ef hann er tómur þá verður head ný nóða
    // með gildin data = number og next = NULL
    if( head == NULL)
    {
        head = create_node(number, NULL);
        return;
    }
    
    // Skilgreinum nýja nóðu sem á að fara aftast hefur data = number og next = NULL
    Node* newNode = create_node(number, NULL);
    
    // Finnum öftustu nóðuna
    Node* temp = get_last(head);
    
    // tengjum nýju nóðuna aftast á listann
    temp->next = newNode;
}

//----------------------------------- insert_node --------------------------------------
// Bætir við nýrri nóðu eftir nóðuna afterMe
void insert_node(Node* afterMe, int number)
{
    // Gott að venja sig á að skoða jaðartilfellin.
    if(afterMe == NULL)
    {
        return;
    }
    // Skilgreinum nýja nóðu
    Node* newNode = new Node;
    // Setjum gildið í nýju nóðuna
    newNode->data = number;
    // Látum nýju nóðuna beda á þá nóðu sem afterMe bendir á.
    newNode->next = afterMe->next;
    // Látum afterMe benda á nýju nóðuna
    afterMe->next = newNode;
}

void insert_before_less(Node* &head, int number)
{
    // Athugum hvort listinn sé tómur. Ef hann er tómur þá verður head ný nóða
    // með gildin data = number og next = NULL
    if( head == NULL)
    {
        head = create_node(number, NULL);
        return;
    }
    // Búum til nýja nóðu
    // Fallið create_node skilar nýrri nóðu sem hefur gildið data = number og next = NULL
    Node *newNode = create_node(number, NULL);
    
    // Athugum hvort number eigi að fara fremst í listann.
    if(head->data < number)
    {
        // Látum nýju nóðuna benda á head
        newNode->next = head;
        // Látum head vera nýju nóðuna - head á alltaf að vera fremsta nóðan í listanum.
        head = newNode;
    }
    else
    {
        Node* temp = head;
        // Á meðan gildið í nóðunni er stærra en talan okkar þá færum við okkur áfram í listanum
        while(temp->next != NULL && temp->next->data > number)
        {
            temp = temp->next;
        }
        // Ef að temp->next != NULL þá hefur while lykkjan hætt því að það fannst nóða í listanum sem var
        // minni en eða jafnt og number.
        // Ef temp->next == NULL þá erum við komin í endan á listanum og nýja nóðan fer aftast.
        if(temp->next != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else if(temp->next == NULL)
        {
            temp->next = newNode;
        }
        
    }
    
}

//----------------------------------- print_last ---------------------------------------

// Prentar út gildið hjá öftustu nóðunni.
void print_last(Node* head)
{
    
    // Athugum fyrst hvort listinn sé tómur.
    if( head == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
    
    // Skilgreinum temp = head til að ítra í gegnum listann
    Node* temp = head;
    
    // Finnum öftustu nóðuna. Aftasta nóðan hefur þá eiginleika að next = NULL.
    while( temp->next != NULL)
    {
        temp = temp->next;
    }
    
    // Skrifum út gildið.
    cout << "Data in back: " << temp->data << endl;
}


// Gerir það sama og fallið print_last nema notar fallið getLast til að finna öftustu nóðuna.
void print_last_2(Node* head)
{
    // fáum seinustu nóðuna í listanum
    Node* last = get_last(head);
    
    // Ef last == NULL þá var listinn tómur
    // Ef last != NULL þá er last seinasta nóðan í listanum
    if( last == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
    
    cout << "Data in back: " << last->data << endl;
}


//----------------------------------- contains ---------------------------------------

// Fall sem skilar true ef talan number er í listanum annars false
bool contains( Node* head, int number)
{
    // ítrum okkur í gegnum allan listann
    for(Node* temp = head; temp != NULL; temp = temp->next)
    {
        // athugum hvort að eitthver nóða hafi gildið number
        if(temp->data == number)
        {
            return true;
        }
    }
    
    return false;
}

// Gerir sama og fallið fyrir ofan nema notar fallið getNode
bool contains_2(Node* head, int number)
{
    // Fáum nóðu sem hefur gildið number
    Node* theNode = get_node(head, number);
    
    // Ef theNode == NULL þá er listinn annaðhvort tómur eða engin nóða er með gildið number í listanum
    if(theNode == NULL)
    {
        return false;
    }
    
    return true;
}

//----------------------------------- count ---------------------------------------

// Fall sem skilar fjölda nóða í listanum
int count(Node* head)
{
    int counter = 0;
    // Skilgrienum nýja breytu sem bendir á sama stað og head til að ítra okkur í gegnum listann
    Node* temp = head;
    // Við erum komin á endan á listanum þegar temp == NULL
    while(temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}


//----------------------------------- delete_list ---------------------------------------

// Fall sem eyðir öllum nóðum í listanum
void delete_list(Node* head)
{
    Node* toDelete = head;
    while(head != NULL)
    {
        toDelete = head;
        head = head -> next;
        delete toDelete;
    }
    
    head = NULL;
}
