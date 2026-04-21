#include<iostream>
#include<vector>
using namespace std;

int solveUsingMemo(int n, int k, vector<int>&dp){

    //Mandatory to keep two base cases because 2 calls jaa rhi h -> (n-1) & (n-2), therefore kept base cases for both
    //base case
    if(n==1){
        return k;
    }
    if (n==2){
        return (k+ k*(k-1));
    }

    //step 03: check if ans already exists
    if(dp[n] != -1){
        return dp[n];
    }

    //step 02: copy paste recursive logic and convert it into dp 
     dp[n] = (solveUsingMemo(n-1, k, dp) + solveUsingMemo(n-2, k, dp)) *(k-1);
    return dp[n];
}


int main(){
    int n =3;
    int k = 2;
    //step 01: create DP Array
    vector<int>dp(n+1, -1);

    //confuion point: dp ki size n rkhu ya n+1 rkhu?? zayada rkh lo doesn't matter but km mt rkho therefore, n+1 instead of n
    int ans = solveUsingMemo(n,k , dp);
    cout <<"Ans: " << ans << endl;
}