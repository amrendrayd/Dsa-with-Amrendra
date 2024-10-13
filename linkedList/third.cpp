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

void insertAtHead(Node* &head, int data){
    // step :- 1
    Node* newNode = new Node(data);

    // step:- 2
    newNode->next = head;

    // step:- 3
    head = newNode;
}

// I want to insert a node right at the end of linked list
void insertAtTail(Node* &tail, int data){
    // step:- 1
    Node* newNode = new Node(data);

    // step:- 2
    tail->next = newNode;

    // step:- 3
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

    Node* head = new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);

    print(head);
    cout << endl;

    

    return 0;
}