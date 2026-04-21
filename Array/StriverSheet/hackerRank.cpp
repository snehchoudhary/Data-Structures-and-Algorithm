#include <iostream>
#include<vector>
using namespace std;

int greatestElement (vector <int>responseTimes, int size) {
    
    int i = 0;
    int count = 0;
    int avgSum = 0;

    for (int j = 1; j < responseTimes.size(); j++){
        avgSum += responseTimes[i]/j ;
        if (responseTimes[j] > avgSum) {
            count ++;
            i++;
        }
        else {
            i++;
        }
    }
    return count;
}
int main () {
    int responseTimes[] = {100, 200, 150, 300};
    int size = 4;
    int result = count;
}