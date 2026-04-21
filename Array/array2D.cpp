#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col){
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
}

//To access 2D array column wise
void accessColumnWise(int brr[][4], int Row, int Col){
    for(int i=0; i<Col; i++){
        for(int j=0; j<Row; j++){
            cout << brr[j][i] << " ";
        }
    }
    cout << endl;
}

bool findTarget(int crr[][4], int rOw, int cOl, int target){
    for (int i=0; i<rOw; rOw++){
        for(int j=0; j<cOl; j++){
            if(crr[i][j]==target){
                cout << "Target is present" << endl;
            }
            else{
                cout << "Target isn't present" << endl;
            }
        }
    }
    cout << endl;
}

int main(){
 int arr[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
 };
 int row=3;
 int col=4;
 printArray(arr, row, col);
 int brr[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
 };
 int Row=3;
 int Col=4;
 accessColumnWise(brr, Row, Col);
 int crr[3][4]={
    {2,3,4,5},
    {6,7,8,9},
    {10,30,40,50}
    };
    int rOw=3;
    int cOl=4;
    int target=60;
    findTarget(crr, rOw, cOl, target);
 }
