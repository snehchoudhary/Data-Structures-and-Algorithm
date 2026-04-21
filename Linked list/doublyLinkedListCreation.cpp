#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(){
        Node*prev;             //default constructor
        Node*next;
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
int main(){
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node* third = new Node (30);
    Node*fourth = new Node(40);

    first->next = second;
    second ->next = third;
    third->next = fourth;
    fourth->next= NULL;

    first->prev = NULL;
    second->prev= first;
    third->prev = second;
    fourth-> prev = third;

    Node*head = first;
    printLL(head);
}