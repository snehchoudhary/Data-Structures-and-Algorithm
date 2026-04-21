#include <iostream>
using namespace std;

int pairSumToX(int input[], int size, int x){
    int pairs =0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) {
                pairs++;
            }
		}
	}
	return pairs;
}

int main(){
   int input[]= {2,4,6,8,5,3};
   int size=6;
   int x = 10;
   cout << "Pairs: " << pairSumToX(input, size, x) << endl;
}