#include<iostream>
#include<vector>
using namespace std;


//function will handle all the possibilities given below
//possibility of:-
//closed path, out of bound, infinite loop
bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>>&visited){
    if(maze[newx][newy] == 1 && newx >=0 && newx<row && newy>=0 && newy<col && visited[newx][newy] == false){
        return true;
    }
    else{
        return false;
    }
}
int printAllPath(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>&visited){
//destinates coordinates are [row-1] , [col-1]
//base case
if (srcx == row-1 && srcy == col-1){
    //destination reached
    cout << output << endl;
    return 0;
}
//1 case I will solve rest recursion will handle
//RIGHT
int newx = srcx;
int newy = srcy+1;

if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
//mark visited
 visited[newx][newy] = true;
//call recursion
 printAllPath(maze, row, col, newx, newy, output + 'R', visited);
//backtracking
 visited[newx][newy] = false;
}

//LEFT
newx = srcx;
newy = srcy-1;
if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
    //mark visited
     visited[newx][newy] = true;
    //call recursion
    printAllPath(maze, row, col, newx, newy, output + 'L', visited);
    //backtracking
      visited[newx][newy] = false;
}

//UP
newx = srcx-1;
newy = srcy;
if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
    //mark visited
    visited[newx][newy] = true;
    //call recursion
    printAllPath(maze, row, col, newx, newy, output + 'U', visited);
    //backtracking
    visited[newx][newy] = false;
}

//DOWN
newx = srcx+1;
newy = srcy;
if(isSafe(srcx, srcy, newx, newy, maze, row, col, visited)){
    //mark visited
    visited[newx][newy] = true;
    //call recursion
    printAllPath(maze, row, col, newx, newy, output + 'D', visited);
    //backtracking
     visited[newx][newy] = false;
}
}

int main(){
    int maze[4][4] ={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row =4;
    int col =4;

    int srcx = 0;   // x coordinate of source
    int srcy =0;    //y coordinate of source
    string output = "";

    //created visited 2D Array
    vector<vector<bool>>visited(row, vector<bool>(col, false));
    if(maze[0][0] == 0){
        //source position is closed which means there is no movement
        cout << "No path exists" << endl;
        return 0;
    }
    else{
        visited[srcx][srcy] = true;
         printAllPath(maze, row, col, srcx, srcy, output, visited);
    }
   

}