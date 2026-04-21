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

void sortStack(stack<int>st){
    //base case
    if(st.empty()){
        return;
    }
    //recursion
    int temp = st.top();
    st.pop();
    sortStack(st);
    //backtracking
    insertInSortedStack(st, temp);
}
int main(){
    stack<int>st;
    st.push(29);
    st.push(42);
    st.push(75);
    st.push(90);
    st.push(60);

    sortStack(st);
     while(!st.empty()){
        cout << st.top() << " " ;
        st.pop();
    }
    return 0;
}