#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = data;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// I want to insert a node right at the head of linked list

void insertAtHead(Node* &head, Node* &tail, int data){
    // step :- 1
    Node* newNode = new Node(data);

    // step:- 2
    newNode->next = head;

    // step:- 3
    // head = newNode;
    if(head == NULL){
        tail = newNode;
    }
    head = newNode;
}

// I want to insert a node right at the end of linked list
void insertAtTail(Node* &head, Node* &tail, int data){
    // step:- 1
    Node* newNode = new Node(data);

    // step:- 2
    // tail->next = newNode;
    if(tail == NULL){
        tail = newNode;
    }
    else {
        tail->next = newNode;
    }

    // step:- 3
    if(head == NULL){
        head = newNode;
    }
    tail = newNode;
}

void print (Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main() {

    // Node* head = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,50);
    insertAtTail(head, tail, 90);

    print(head);
    cout << endl;



    return 0;
}