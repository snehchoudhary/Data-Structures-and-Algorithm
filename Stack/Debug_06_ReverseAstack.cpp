#include<iostream>
#include<stack>
using namespace std;



void insert_at_bottom(stack<int>& st, int x) {
	if (st.size() == 0) {
		st.push(x);
	}
	else {
		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);
		st.push(a);
	}
}
void reverse(stack<int>& st) {
	if (st.size() > 0) {
		int x = st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st, x);
	}
	return;
}
int main(){
	stack<int>st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	reverse(st);
	while(!st.empty()){
		cout << st.top() << " " << endl;
		st.pop();
	}
	return 0;
}