/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
*/

#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 && setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }