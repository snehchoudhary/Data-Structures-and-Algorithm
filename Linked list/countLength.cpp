#include <iostream>
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
void printLL(Node*head){
Node*temp = head;
while (temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
}
cout << endl;
}
int getLength(Node* head){
Node*temp = head;
int count = 0;
while (temp != NULL){
    count ++;
    temp = temp-> next;
}
return count;
}
int main(){
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);

    first->next = second;
    second -> next = third;
    third ->next = fourth;

    Node*head = first;
    cout << "Printing LL" << endl;
    printLL (head);

    cout << "Length of LL is:" << getLength(head);
}