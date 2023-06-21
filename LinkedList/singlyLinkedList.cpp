#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data  = data;
        this -> next = NULL;
    }
};

int main () {
    Node* node1 = new Node(99);
    cout << "Data is :" << node1 -> data << endl;
    cout << "Address of Next Node is :" << node1 -> next << endl;


}