#include <iostream>
using namespace std;      //implementing stack here therefore didnt used STL for stack

class Stack{
public:
int*arr;
int size;
int top;

Stack (int size){                      //constructor
    arr = new int[size];
    this ->size = size;
    this->top=-1;
}
void push(int data){                     //function for inserting data
    if(top==size-1){
        cout << "Stack overflow" << endl;
        return;
    }
    else{
    top++;
    arr[top]= data;
    }
}
void pop(){                                //function for deleting data
    if(top == -1){
        cout << "Stack underflow" << endl;
        return;
    }
    else{
        top--;
    }
}
bool isEmpty(){                           //function to check if stack is empty or not
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}
int getTop(){                             //function to get element at the top of the stack
    if(top == -1){
        cout << "Stack empty" <<endl;
    }
    else{
    return arr[top];
     }
   }
   void print (){                          //function to print the stack
    cout << "Stack:";
    for(int i=0; i<getSize();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
   }
   int getSize(){
    return top+1;
   }
};
int main(){
    //creation 

    Stack st(8);        //static stack               //creating stack instead of using STL for stacks
    //push
    st. push(10);
    st.push(20);
    st.push(30);

    //pop
    st.pop();
    st.print();
    st.pop();
    cout << st.getTop() << endl;
    cout << endl << st.getSize() << endl;

    if (st.isEmpty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not empty" << endl;
    }
    }
