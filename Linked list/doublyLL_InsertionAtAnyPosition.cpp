#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(){
        prev = NULL;           //default constructor
        next=NULL;
    }
    Node(int data){            //parametrised constructor
        this-> data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printLL(Node*head){
    Node*temp = head;
    while(temp!= NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
}

int findLength(Node*&head){
    Node*temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node*&head, Node*&tail, int data){
    //LL is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    //LL is not empty
    //step 01: Create new node
    Node* newNode = new Node(data);

    //step 02: Head prev is newNode
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*&head, Node*&tail, int data){
    //LL is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
    //LL is not empty
    //step 01: Create new node
    Node*newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
   }
}

void insertAtAnyPosition(Node*&head, Node*&tail, int data, int position){
    int length = findLength(head);
    if(position <= 1){
         insertAtHead(head, tail, data);
    }

    else if(position > length){
        insertAtTail(head, tail, data);
    }
    else{
        //insert middle of LL
        //step 01: Create new node
        Node*newNode = new Node(data);
        //set prev and curr 
        Node* prev = NULL;
        Node* curr = head;
        while (position > 1){
             position--;
            prev = curr;
            curr = curr->next;
            }
        //update the pointers
        prev ->next = newNode;
        newNode->prev = prev;
        newNode->next = curr;
        curr->prev = newNode ;
    }
}
int main(){
    // Node*head= new Node(10);
    // Node*second = new Node(20);
    // Node*third = new Node(30);
    // Node*tail = new Node(40);

    //  head->next = second;
    //  second->next = third;
    //  third->next = tail;
    //  tail->next = NULL;

    //  head->prev = NULL;
    //  second->prev =head;
    //  third->prev = second;
    //  tail->prev = third;

    //  cout << "Insert node at any position:" << endl;
    //  insertAtAnyPosition(head, tail, 100, 4);
    //  printLL(head);

    Node*head = NULL;
    Node*tail= NULL;

    insertAtTail(head,tail,10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    printLL(head);
    cout << endl;
    cout << "Insert At any position:" << endl;
    insertAtAnyPosition(head, tail, 100, 3);
    printLL(head);
 }