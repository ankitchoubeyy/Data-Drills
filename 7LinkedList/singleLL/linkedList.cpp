#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//! Node Creation
class Node{
    public:
    int data;
    Node *next;

    //! constructor
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

//! Insertion at Head
void insertAtHead(Node* &head, int data){
    // temp node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

//! Insertion at Tail
void insertAtTail(Node* tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

//! Insertion at Position
void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    //? If insertino at head
    if (position == 1)
    {
        insertAtHead(head,data);
        return;
    }
    

    Node* temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    //? insertion at tail
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    //? Create new node
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

//! Print linked list
void print(Node* &head){
    // temp node
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* node1 = new Node(30);

    // head pointing to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtTail(tail, 90);
    print(head);
    insertAtPosition(head,tail,3,20);
    print(head);

    return 0;
}