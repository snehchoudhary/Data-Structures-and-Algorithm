#include<iostream>
using namespace std;
void print(int n){
    // base call
    if(n==1){
        cout << 1 << " ";
    }
    if(n==0){
        return;
    }
    
     
    //processing
    cout << n << " ";

    //recursive call
    print(n-1);

   
}
int main(){
    print(5);
    return 0;
}