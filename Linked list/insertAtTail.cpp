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
int main(){
    Node*head = new Node(10);
    Node*second = new Node(20);
    Node*tail = new Node(30);

    head->next = second;
    second->next =tail;

    insertAtTail(head, tail, 90);
    cout << "Printing LL" << endl;
    printLL(head);
}