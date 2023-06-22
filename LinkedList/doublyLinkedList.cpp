#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at head.
void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at Tail.

void insertToTail(Node *&tail, Node *&head, int d)
{

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void inserAtPosition(Node *&tail, Node *&head, int position, int d)
{
    //  Insert at first position
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    // Insert at any position or last position
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if (temp->next == NULL)
        {
            insertToTail(tail, head, d);
            return;
        }

        Node *newNode = new Node(d);

        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;
    }
}
int main()
{

    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    insertAtHead(head, tail, 20);
    print(head);
    cout << "HEad is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    insertAtHead(head, tail, 30);
    print(head);

    insertToTail(tail, head, 40);
    print(head);

    inserAtPosition(tail, head, 1, 50);
    print(head);

    inserAtPosition(tail, head, 4, 60);
    print(head);

    inserAtPosition(tail, head, 6, 70);
    print(head);
}