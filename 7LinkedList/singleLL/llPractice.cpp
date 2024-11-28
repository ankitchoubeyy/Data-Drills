#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// creating node
class Node{
    public:
    int data;
    Node* next;

    //! constructor
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

//! Insert at head
void insertAtHead(Node* &head, int data){
    // temp node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    // temp node creation
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int pos, int data){
    Node* temp = head;
    int count = 1;

    while (count < pos -1)
    {
        temp = temp->next;
        count++;
    }

    // create new node
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//! print list
void printList(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    printList(head);

    insertAtHead(head, 5);
    printList(head);

    insertAtTail(tail, 15);
    printList(head);

    insertAtPosition(head,3, 25);
    printList(head);


    return 0;
}