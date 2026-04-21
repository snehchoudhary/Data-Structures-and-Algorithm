#include<iostream>
using namespace std;

//Qn 1 : Count 0's and 1's in an array
// void countZeroOne(int arr[], int size){
//    int countZero = 0;
//    int countOne = 0;
//    for(int i=0; i<=size; i++){
//     if(arr[i]==0){
//         countZero++;
//     }
//     else{
//         countOne++;
//     }
//    }
//    cout << "Count of Zero: " << countZero << endl;
//    cout << "Count of One: " << countOne << endl;
// }

//   //Qn 2 : Reverse an array

//   void reverseArray(int arr[] , int size){
//   int left = 0;
//   int right = size-1;
//   while(left<= right){
//   swap(arr[left] , arr[right]);
//   left ++;
//   right --;
//   }
//   cout << "Output for reverse an array"<< endl;
//   for(int i=0; i<size; i++){
//      cout << arr[i];
//   }
//   cout << endl;
//   }
    
//   //Qn 3 : Print extreme in an array

//   void extremePrint(int brr[], int x){
//     int left = 0;
//     int right = x-1 ;
//     cout << "Printing extreme elements of an array" << endl ;
//     while(left <= right){
//         cout << brr[left] << " " << brr[right] << endl;;
        
//         left++;
//         right--;
//     }
//     cout << endl;
//   }

//   //Qn 4 : Print all pairs of an array

//   void printPairs( int crr[], int n){
//     for(int i=0; i<n ; i++){
//         for(int j=0; j<n; j++){
//             cout << crr[i] << " " << crr[j] << endl;
//         }
//     }
//     cout << endl;
//   }

//   //Qn 5: Print all triplets

//   void printTriplets(int drr[], int y){
//     for(int i=0; i<y ; i++){
//         for(int j=0; j<y; j++){
//             for (int k=0; k<y; k++){
//                 cout << drr[i] << " " << drr[j] << " " << drr[k] << endl;
//             }
//         }
//     }
//     cout << endl;
//   }
  //Qn 6: Print row wise sum 

  void rowWiseSum(int err[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum = sum+err[i][j];
            cout << sum << endl;
        }
        cout << endl;
    }
  }

  //Qn 7: Print column wise
  void columnWiseSum(int heist[][4], int rOw, int cOl){
    for(int i=0; i<cOl; i++){
        int sum=0;
        for(int j=0; j<rOw; j++ ){
            sum=sum+heist[i][j];
            cout << sum << endl;
        }
        cout << endl;
    }
  }

  //Qn 8: modify the array by putting -ve on left side and +ve on right side
  void modifyArray(int array[], int n){
    int index =0;
    int j=0;
    for(int index=0; index<0; index++){
        if(array[index]<0){
            swap (array[index],array[j]);
            j++;
        }
      
    }
  }
int main (){
    // int arr[] = {0,1,1,0,1,0,0,1,0,1,0,1,0};
    // int size =  12;
    // countZeroOne(arr, size);
    // reverseArray(arr, size);
    // int brr[6]={10,20,30,40,50,60};
    // int x = 6;
    // extremePrint(brr, x);
    // int crr[]={10,20,30};
    // int n = 3;
    // printPairs(crr , n);
    // int drr[] ={1,2,3,4};
    // int y = 4;
    // printTriplets(drr, y);
    int err[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    rowWiseSum(err, row,col);
    int heist[4][4]={
        {5,7,8,9,},
        {4,5,2,1,},
        {9,6,8,12},
        {23,10,11,4}
    };
    int rOw = 4;
    int cOl=4;
    columnWiseSum(heist,rOw, cOl);
    int array[]={2,-7,-6,4,-3,9,3,-4};
    int n=8;
    cout << "Printing the array" << endl;
       for(int i=0; i<n; i++){
        cout << array[i];
       }
    modifyArray(array, n);
    
}