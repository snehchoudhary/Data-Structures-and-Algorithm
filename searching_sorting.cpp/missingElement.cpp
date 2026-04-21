#include<iostream>
using namespace std;
int missingElement(int arr[], int n){
    int s =0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    

    while(s<=e){
        int difference = arr[mid] - mid;
        if(difference == 1){
            s = mid+1;
        }
        else if(difference != 1){
            ans = mid;
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}
int main (){
    int arr[]= {1, 2, 3, 4, 6,7, 8, 9};
    int n =8;
    int finalAns = missingElement(arr, n);
    if(finalAns ==-1){
        cout << "No element is missing" << endl;
    }
    else {
        cout << "Missing element" << finalAns +1 << endl;
        //added 1 bcoz we are storing index...and it starts with zero
    }
}