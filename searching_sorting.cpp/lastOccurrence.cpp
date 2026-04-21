#include <iostream>
using namespace std;
int findlastOccurrence(int arr[], int n, int target){
    int s =0;
    int e =n-1;
    int mid =(s+e)/2;
    int ans = -1;

    while(s<= e){
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(target > arr[mid]){
            s=mid+1 ;
        }
        //else if(target < arr[mid]){
            //s = mid+1;
           //}
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    int arr[]= {10,20,30,40,50,60,60,60,60};
    //int arr[] = {10, 20, 30, 30, 30, 30, 30, 40, 50};
    int n = 9;
    int target =60;
    int lastOccurrence = findlastOccurrence(arr, n, target);
    if(lastOccurrence == -1){
        cout << "Element not found" << endl;
    }
    else {
        cout <<"element found at index : " << lastOccurrence << endl;
    }
}