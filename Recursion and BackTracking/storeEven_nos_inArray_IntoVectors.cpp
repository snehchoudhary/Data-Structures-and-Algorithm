#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[], int size, int index, vector<int>&ans){
   //base case
   if(index>=size){
    return;
   }
   //processing
   if(arr[index]%2 == 0){
    ans.push_back(arr[index]);
   }
   //recursive call
   solve(arr, size, index+1, ans);
}
int main(){
    int arr[]= {11, 20, 35, 36, 40, 59, 71};
    int size = 7;
    int index =0;
    vector<int>ans;                                   //creating vector
    solve (arr, size, index, ans);                    //function call
    //printing vector
    for(int i=0; i<ans.size(); i++){
     cout << ans[i] << " ";
    }
}