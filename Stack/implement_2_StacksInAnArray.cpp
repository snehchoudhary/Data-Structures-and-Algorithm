#include<iostream>
#include<stack>
using namespace std;
                                          //DO DRY RUN ONCE
class Stack{
    public:
    int*arr;
    int size;
    int top1;
    int top2;

    Stack(int size){                         //constructor
        arr = new int[size];
        this->size= size;
        top1 = -1;
        top2 = size;
    }
    void push1 (int data){
        //check for space availability
        if(top2 - top1){
            cout << "OVERFLOW"<< endl;;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }
    void push2 (int data){
        top2--;
        arr[top2] = data;
    }
    void pop1(){
        //check for space availability
        if(top1==-1){
          cout << "UNDERFLOW" << endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2(){
        arr[top2] = 0;
        top2++;
    }
    int getTop1(){
        return arr[top1];
    }
    int getTop2(){
        return arr[top2];
    }
};
int main(){
  Stack st(6);
  st.push1(2);
  st.push1(4);
  st.push1(6);
   st.push2(10);
   cout << st.getTop1() <<" "<< endl;
}