#include<iostream>
using namespace std;
int lastOccurrence (int arr[], int n, int target){
    int s =0;
    int e =n-1;
    int mid =(s+e)/2;
     int ans = -1;
    while(s<=e){
      if(arr[mid] == target){
        ans = mid;
       s= mid+1;
      }
      else if(target < arr[mid]){
        e = mid-1;
      }
      else if(target > arr[mid]){
        s=mid+1;
      }
      mid =(s+e)/2;
    }
    return ans;
}
int firstOccurrence(int arr[], int n, int target){
    int s=0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==target){
            ans =  mid;
            e=mid-1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        else if(target>arr[mid]){
            s = mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;

}
int main (){
    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50};
    int n= 8;
    int target=30;
    int anslastOccurrence = lastOccurrence(arr, n, target);
    int ansFirstOccurrence = firstOccurrence(arr, n, target);
    int totalOccurrence = anslastOccurrence - ansFirstOccurrence +1;
    cout << "Ans of the given question is: " << totalOccurrence << endl;
}