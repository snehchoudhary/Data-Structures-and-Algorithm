#include<iostream>
#include<vector>
using namespace std;

int solveUsingTabulationSO(int capacity, int wt[], int profit[], int n) {
	vector<int> next(capacity+1, 0);
	vector<int> curr(capacity+1, -1);


	for(int j=n-1; j>=0; j--) {
		for(int i=0; i<=capacity; i++) {
			int include = 0;
			if(wt[j] <= i) {
				include = profit[j] + next[i-wt[j]];
			}
			int exclude = 0 + next[i];
			curr[i] = max(include, exclude);
		}
		//shifting
		next = curr;
	}
	return curr[capacity];
}

int solveUsingTabulationSO2(int capacity, int wt[], int profit[], int n) {
	vector<int> next(capacity+1, 0);
	
	for(int j=n-1; j>=0; j--) {
		for(int i=capacity; i>=0; i--) {
			int include = 0;
			if(wt[j] <= i) {
				include = profit[j] + next[i-wt[j]];
			}
			int exclude = 0 + next[i];
			next[i] = max(include, exclude);
		}
		//shifting
		// next = curr;
	}
	return next[capacity];
}

int main(){
    
	int capacity = 6;
	int wt[] = {1,2,3};
	int profit[] = {10,15,40};
//int index = 0;
	int n = 3;

	vector<vector<int> > dp(capacity+1, vector<int>(n+1, -1));

	int ans = solveUsingTabulationSO2(capacity,wt, profit, n);
	cout << "max Profit: " << ans << endl;


	return 0;
}
