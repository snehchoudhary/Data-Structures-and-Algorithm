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

//rest recursion will handle
insertAtBottom(st, element);
//by backtracking 
st.push(temp);
}

   int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element =400;
    int size = 4;
     insertAtBottom (st, element);
    
    while(!st.empty()){
        cout << st.top()<< " "<< endl;
        st.pop();
    }
    return 0;
}