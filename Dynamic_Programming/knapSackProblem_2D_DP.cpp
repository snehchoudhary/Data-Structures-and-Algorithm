#include<iostream>
using namespace std;

int solveUsingRecursion(int capacity, int wt[], int profit[], int index, int n){
    //base case
    if(index = n-1){
        if(wt[index] <= capacity){
            return profit[index];
        }
        else{
            return 0;
        }
    }

    //include/exclude
    int include =0;
    if(wt[index] <= capacity){
        include = profit[index] + solveUsingRecursion(capacity - wt[index], wt, profit, index+1, n);
    }
    int exclude = 0 + solveUsingRecursion(capacity, wt, profit, index+1, n);
    int ans = max(include, exclude);
    return ans;
}

int main(){
    int capacity = 50;
    int wt[] ={10,20,30};
    int profit[] = {60, 100, 120};
    int index = 0;
    int n =3;

    int ans = solveUsingRecursion(capacity, wt, profit, index, n);
    cout << "Ans: " << ans << endl;

    return 0;
}