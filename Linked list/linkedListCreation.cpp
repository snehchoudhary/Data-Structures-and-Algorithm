#include <iostream>
using namespace std;

class Node {
public:
int data;
Node*next;

Node(){
    cout << "I am inside default constructor" << endl;
    this ->next = NULL;         //default constructor
}
Node (int data){
    cout << "I am inside parametrised constructor" << endl;
    this ->data = data;
    this -> next = NULL;        //parametrised constructor
}
};
void printLL(Node*head){        //function for printing linked list
    Node*temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
   // Node a;                         //object creation and static allocation
    Node*first = new Node (10);      //object creation and dynamic allocation   
    Node*second = new Node (20);
    Node*third = new Node (30);
    Node*fourth = new Node(40);
    Node*fifth = new Node(50);

    first -> next =second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;           //LL created

    Node*head = first;
    cout << "Printing LL" << endl;
    printLL (head);
}