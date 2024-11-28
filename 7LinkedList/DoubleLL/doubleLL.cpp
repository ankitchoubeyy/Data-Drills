#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    //! Constructor
    Node(int data){
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }

    //! Destructor
    ~Node(){
        int val = this->data;
        if(next != nullptr){
            delete next;
            next = nullptr;
        }
        cout << "Memory is free " << val << endl;
    }
};


//! Insert at head
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//! Insert at tail
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//! insert at specific position
void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
    if(pos == 1){
        insertAtHead(head,data);
        return;
    }
    else{
        Node* temp = head;
        int count = 1;

        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }

        if(temp->next == nullptr){
            insertAtTail(tail,data);
            return;
        }

        // creating a node to insert
        Node* nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
        nodeToInsert->prev = temp;
        
    }
}

//! Deletion
void deleteNode(Node* head, int pos){
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = curr->next;

        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr= curr->next;
            count++;
        }
        
        curr->prev = nullptr;
        prev->next = curr->next;
        curr->next = nullptr;

        delete curr;
    }
}

//! Print double linked list
void print(Node* head){
    Node* temp = head;

    while (temp != nullptr)
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

    insertAtHead(head,5);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,2,105);
    print(head);

    insertAtPosition(head,tail,1,100);
    print(head);
    insertAtPosition(head,tail,6,600);
    print(head);

    deleteNode(head, 1);
    print(head);
    return 0;
}