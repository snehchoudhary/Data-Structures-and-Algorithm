#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*next;

Node(int data){
this->data = data;
this->next = NULL;
}
};
Node*getStartingPoint(Node*&head){
    //check for loop
    Node*slow = head;
    Node*fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        if(fast == slow){
            break;
        }
    }
    slow = head;
    while(fast != slow){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
void printLL(Node*head){
Node*temp = head;
while (temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
}
cout << endl;
}
    int main(){
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);

    first->next = second;
    second -> next = third;
    third ->next = fourth;

     Node*head= first;
     cout << "Printing LL:" << endl;  
     printLL(head);
    cout << "Starting point of the loop" << endl; 
    getStartingPoint(head);
    
}