#include <iostream>
using namespace std;
int findFirstOccurrence(int arr[], int n, int target){
    int start =0;
    int end = n-1;
    int mid =(start+end)/2;
    int ans =-1;

    //don't return instead store it 
    while(start<= end){
        if(arr[mid] == target){
            ans =mid;
            end = mid-1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        // else if(target > arr[mid]){
        //     start = mid+1;
        
        mid =(start+end)/2;
    }
    return ans;

}
int main(){
    int arr[]={10,20,30, 30, 30, 30, 70, 80, 90};
    //int arr[] = {10,20,30,40,50,60,60,60,60};
    int n = 9;
    int target = 30;
    //int target =60;
    int finalans = findFirstOccurrence(arr, n, target);
    if(finalans == -1){
        cout<< "target not fouund" << endl;
    }
    else {
        cout << "target found at index: " << finalans << endl;
    }
}