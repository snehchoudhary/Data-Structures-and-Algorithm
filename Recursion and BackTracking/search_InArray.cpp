#include<iostream>
using namespace std;

bool searchArray(int arr[], int size, int target, int index){

    //base case
    if(index >= size){
        return false;
    }
    if (arr[index] == target){
        return true;
    }

    //recursive call
    int aageKaAns = searchArray(arr, size, target, index+1);
    return aageKaAns;

}
int main(){
    int arr[]= {10, 20, 30, 30, 60, 40, 50};
    int size = 7;
    int index=0;
    int target = 60;
    cout << searchArray(arr, size, target, index);
}
