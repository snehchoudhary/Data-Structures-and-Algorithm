#include<iostream>
using namespace std;

void printArray(int p[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Creation of array" << endl;
    int money [127];
    int a=5;
    cout << "Address of a: " << &a << endl;
    cout << "Size of array: " << sizeof(money) << endl;

    //Array Initialisation : Alloting some values
    int arr[] = {2,3,4,5,6};    
    int brr[5] = {5,10,15,20,25};
    int crr[5] = {3,9};
    // int drr[2] = {2,9,3,4,6,8};        will show an error

    //To access any memory block from an array
    int array[5] = {3,5,8,9,12};
    cout << array[2] << endl;

    //Taking input in an array
    int heist[5];
    cin >> heist[0];
    cin >> heist[1];

    //Practice Qn "Shift arrays element by 1"

    //Vector : Dynamic array
    //STL : provides collection of template classes and functions that provide common data structures and algorithm
    
     cout << "Accessing 2D Arrays :" << endl;

    int p[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    printArray(p, row, col);
    //To initialise 2D array we must specify the size of columns atleast
    //To accessing any memory block of an 2D array
   cout << p[0][0] << " "  << p[1][2]<< endl;
    return 0;
}