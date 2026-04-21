#include<iostream>
using namespace std;



int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int val = 40;
    cout << "Found target is at index: " << linearSearch(arr,n,val) << endl;
}