#include<iostream>
using namespace std;
void doubleArray(int arr[], int size, int index){
    //Base condition
    if(index>=size){
        return;
    }
    //processing
   int ans = 2*arr[index];
    cout << ans << " ";

    //recursive call
    doubleArray(arr, size, index+1);
}
int main(){
    int arr[]= {10, 20, 30, 40, 50};
    int size =5;
    int index =0;
    doubleArray(arr, size, index);
}