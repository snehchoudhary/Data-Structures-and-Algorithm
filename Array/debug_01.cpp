#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter no of elements:" << endl;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cout << "Enter element for" << i << endl;
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
        
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}