#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom (stack<int> &st, int &element){
    
//base case
if( st.empty()){
    st.push(element);
    return;
}
//1 case, I will solve
int temp = st.top();
st.pop();

//rest recusrsion will handle
insertAtBottom(st, element);
//by backtracking 
st.push(temp);
}

void reverseAStack(stack<int>&st){
//base case
if(st.empty()){
    return;
}
else{
    // 1 case I will solve
    int temp = st.top();
    st.pop();

    //rest recursion will handle
    reverseAStack(st);
    //backtracking
    insertAtBottom(st, temp);

}
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    

    reverseAStack(st);

    while(!st.empty()){
      cout << st.top() << " " << endl;
      st.pop();
    }
    return 0;
}