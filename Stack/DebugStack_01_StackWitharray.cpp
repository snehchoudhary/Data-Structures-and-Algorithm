#include <iostream>
using namespace std;

class Stack {
public:
    Stack(int capacity) {
        top = -1;
        size = capacity;
        arr = new int[size];
    }
    ~Stack(){
        delete[] arr;
    }

    void push(int value) {
        if (top == size - 1)
            cout << "Stack Overflow";
        else
            arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow";
            return -1;
        }
        cout << arr[top--]<< endl;
    }

private:
    int top;
    int size;
    int* arr;
};

int main() {
    Stack myStack(5);
    myStack.push(1);
    myStack.push(2);
    myStack.pop();
    myStack.pop();
    myStack.pop();
    return 0;
}