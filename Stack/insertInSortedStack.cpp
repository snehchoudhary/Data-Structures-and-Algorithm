#include<iostream>
#include<stack>
using namespace std;

void insertInSortedStack(stack<int>&st, int element){
    //base case
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }
        //1 case is solved by me
        int temp = st.top();
        st.pop();
        
        //rest recursion will handle
        insertInSortedStack(st, element);
    
        //backtracking
        st.push(temp);
    
}

int main(){
    stack<int>st;
    st.push(90);
    st.push(60);
    st.push(40);
    st.push(30);
    st.push(20);
    int element =53;
    insertInSortedStack(st, element);
    while(!st.empty()){
        cout << st.top() << " " ;
        st.pop();
    }
    return 0;
}