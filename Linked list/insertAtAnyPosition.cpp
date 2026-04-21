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
        this -> data = data;

        this-> next = NULL;
    }
};
int getLength(Node* head){
Node*temp = head;
int count = 0;
while (temp != NULL){
    count ++;
    temp = temp-> next;
}
return count;
}
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
void insertAtTail(Node*&head, Node*&tail, int data){
if(head == NULL){
    //empty LL
    Node*newNode = new Node(data);
    head = newNode;
    tail = newNode;
}
else{
    //non empty LL
    Node*newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
}
void printLL(Node*head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
}

void insertAtPosition(Node*&head, Node*&tail, int data, int position){
    int length = getLength(head);
    if(position <= 1){
         insertAtHead(head, data);
    }

    else if(position > length){
        insertAtTail(head, tail, data);
    }
    else{
        //insert at middle of LL
        //create new Node
        Node* newNode = new Node (data);
        //traverse
        Node*prev = NULL;
        Node*curr = head;

        while (position != 1){
            position --;
            prev = curr;
            curr = curr->next;
        }
        //attach prev to new node
        prev ->next = newNode;
        //attach new node to curr
        newNode -> next = curr;
    }
}
int main(){
     Node*head = new Node (10);      //object creation and dynamic allocation   
    Node*second = new Node (20);
    Node*third = new Node (30);
    Node*fourth = new Node(40);
    Node*tail = new Node(50);

    head -> next =second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = tail;           //LL created

    cout << "Inserting node at any position:" << endl;
    insertAtPosition(head, tail, 70, 10);
    printLL(head);

}
