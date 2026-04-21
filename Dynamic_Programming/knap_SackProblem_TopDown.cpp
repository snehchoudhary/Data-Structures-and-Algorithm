#include<iostream>
#include<vector>
using namespace std;

int solveUsingMemo(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>>&dp){
    //base case
    if(index = n-1){
        if(wt[index] <= capacity){
            return profit[index];
        }
        else{
            return 0;
        }
    }

    //  step 03: if answer already exists
    if(dp[capacity][index] != -1){
        return dp[capacity][index];
    }

    //step 02: logic of recursion and store it in the dp

    //include/exclude
    int include =0;
    if(wt[index] <= capacity){
        include = profit[index] + solveUsingMemo(capacity - wt[index], wt, profit, index+1, n, dp);
    }
    int exclude = 0 + solveUsingMemo(capacity, wt, profit, index+1, n, dp);
     dp[capacity][index] = max(include, exclude);
    return dp[capacity][index];
}

int main(){
    int capacity = 50;
    int wt[] ={10,20,30};
    int profit[] = {60,100,120};
    int index =0;
    int n =3;

   //step 01: create dp
    vector<vector<int> > dp(capacity+1, vector<int>(n+1, -1));
    int ans = solveUsingMemo(capacity, wt, profit, index, n, dp);
    cout << "Max Profit: " << ans << endl;
}