#include<iostream>
#include<vector>
using namespace std;

int solveUsingTabulation(int n, int k){

    //step 01: create dp 
    vector<int>dp(n+1, -1);

    //fill initial data from base case
    dp[1] = k;
    dp[2] = k+ k*(k-1);

    //recursion m jo traverse ho rha h tabulation m uska ulta krna hai
    //recursion m 'n' se'1' k traf jaa rhe h isiliye tabulation m '1' se 'n' k traf jayenge
    // now '1' and '2' ka ans already nikala hua h isiliye 3 se strt krenge

    for(int i =3; i<=n; i++){
      //recursive logick likho or convert it into dp  & make sure jo looping variable use kiya h usse n se replace kr do
      dp[i]= (dp[i-1] + dp[i-2]) *(k-1);
    }
    //recursive call m jo call kiya whi yaha return hoga
    return dp[n];

}

int main(){
    int n =3;
    int k =3;
   int ans = solveUsingTabulation(n, k);
   cout << "Ans: " << ans << endl;
}