#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node*&head, int data){
    if(head==NULL){
        //step 1: Create newNode
        Node * newNode = new Node(data);
        //step 2: Update head
        head = newNode;
    }
    else{
        // non empty LL
        //step 1: create new node
        Node* newNode = new Node(data);
        // step 2: attach new node to head node
        newNode-> next = head;
        // step 3: update head
        head = newNode;
    }
}
void printLL (Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
}
int main (){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node (30);
    Node *fourth = new Node(40);

    head-> next = second;
    second -> next = third;
    third -> next = fourth;

// inserting new head 
    insertAtHead(head, 500);

    cout <<"Printing LL" <<endl;
    printLL(head);
}
