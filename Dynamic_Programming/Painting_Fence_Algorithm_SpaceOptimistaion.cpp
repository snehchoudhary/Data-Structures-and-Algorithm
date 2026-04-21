#include<iostream>
#include<vector>
using namespace std;

//As our ans depends on 'n-1' and 'n-2' therefore, we don't need to traverse whole array
//index for which we have to find answer is named as 'curr' and two indices behind it named as 'prev1' and 'prev2'

int solveUsingTabulationSO(int n, int k){
    //no need to create dp in this case
    int prev2 =k;
    int prev1 = k+ k*(k-1);

    if(n==1){
        return prev2;
    }
    if(n==2){
        return prev1;
    }
     int curr;

    for (int i=3; i<n; i++){
        curr = (prev1 + prev2)*(k-1);

        //shift prev1, prev2 and curr
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
    

}
int main(){
    int n =3;
    int k =2;

    int ans = solveUsingTabulationSO(n,k);
    cout << "Ans: " << ans << endl;
}