#include<iostream>
#include<vector>
using namespace std;

int solveUsingTabulation(int capacity, int wt[], int profit[], int n){

    //dp creation
    vector<vector<int>>dp(capacity+1, vector<int>(n+1, -1));

    //fill the places according to base case as it is a 2D array/DP...where, capacity is row and index is column
    //acc to base case if (index>=n), here we are handling case when column = n
    for(int row=0; row<=capacity; row++){
        dp[row][n] =0;
    }

    //for loop: 2 variables have been changed therefore there will be two loops
    //Top Bottom approach m capacity m se subtract ho rha h means wo '0' k trf jaa rha h toh tabulation m zero se capacity k trf jayenge
    for(int i=0; i<=capacity; i++ ){
        //index 
        for(int j=n-1; j>= 0; j--){
            //recursive logic copy paste kro and convert it into dp
            //include/exclude
    int include =0;
    if(wt[j] <= i){
        include = profit[j] + dp[i- wt[j]][j+1];
    }
    int exclude = 0 + dp[i][j+1];
    dp[i][j]= max(include, exclude);
    
        }
    }
    return dp[capacity][0];
}
int main(){
     int capacity = 50;
    int wt[] ={10,20,30};
    int profit[] = {60,100,120};
    int n =3;

   
    int ans = solveUsingTabulation(capacity, wt, profit, n);
    cout << "Max Profit: " << ans << endl;
}
