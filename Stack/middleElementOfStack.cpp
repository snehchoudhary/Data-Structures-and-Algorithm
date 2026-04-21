#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>st, int &pos, int &ans){
    //base case
    if(pos == 1){
        //ans is top only
        cout << "Deleting" << st.top() << endl;
        st.pop();
        return;
    }
    // 1 case hum solve krenge rest recursion will do
    pos--;
    int temp = st.top();
    st.pop();
    //recursion
    solve (st, pos, ans);
    st.push(temp);
}
int getMiddle(stack<int>&st){
    int size = st.size();
    if(st.empty()){
        cout <<"Stack is empty, no middle element" << endl;
        return -1;
    }
    else{
        //stack not empty
        //for odd case
        int pos =0;
        if(size &1 ){
            pos = size/2 +1; 
        }
        else{
            //for even case
            pos = size/2;
        }
        int ans = -1;
        solve (st, pos, ans);
        return ans;
    }
}
int main(){
    stack < int> st;
    st.push(10);
    st. push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << "Before size" <<" " << st.size() << endl;
    int mid = getMiddle(st);
    cout << "Middle element :"<< " " << mid << endl;

    cout << "After size :" <<" "<< st.size() << endl;
}
