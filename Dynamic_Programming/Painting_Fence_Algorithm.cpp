#include<iostream>
using namespace std;

int solveUsingRecursion (int n, int k){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return (k+k*(k-1));
    }
    int ans = (solveUsingRecursion(n-1, k) + solveUsingRecursion(n-2, k)) *(k-1);
    return ans;
}


int main(){
    int n =3;
    int k =3;

    int ans = solveUsingRecursion(n,k);
    cout << "Ans: " << ans << endl;
}