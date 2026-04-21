// Given an array of integers nums, return the value of the largest element in the array

#include <iostream>
#include<vector>
using namespace std;

int greatestElement(int arr[], int size){
    int max = arr[0];

   for (int i = 1; i < size; i++){
    if (arr[i] > max){
    max = arr[i];
    }
   }
   return max;
}

// int main () {
//     int arr[] = {3, 3, 6, 1};
//     int size = 4;

//     int result = greatestElement(arr, size);
//     cout << "The greatest element of this array is: " << result << endl;
// }

// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

int secondLargest (int arr[], int size){
    int max = arr[0];
    int secMax = -1;

    for (int i = 1; i < size; i++){
      if (arr[i] > max){
        secMax = max;
        max = arr[i];
      }
      else if (arr[i] > secMax && arr[i] < max){
        secMax = arr[i];
      }
    }
    return secMax;
}
//  int main() {
//     int arr[] = {8, 8, 6, 7, 5};
//     int size = 5;
//     int result = secondLargest(arr, size);

//     cout << "Second largest element is: " << result << endl;
//  }

 //return true if the array is sorted else false
 bool isSorted (int arr[], int size){
  
  for (int i = 0; i < size-1 ; i++){
    if (arr[i] > arr[i+1]){
      return false;
    }
  }
  return true;
 }
 int main() {
  int arr[] = {2,7, 4, 5};
  int size = 5;

  int result = isSorted(arr, size);
  cout << "the given array is sorted or not? :" << result << endl; 
 }

 int removeDuplicates(int arr[], int size) {
  int i = 0;

  for (int j = 1; j < size; j++){
    if (arr[i] != arr[j]){
      i++;
      arr[i] = arr[j];
    }
  }
  return i+1;
 }

//  Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> result;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
            }

            else if (nums2[j] < nums1[i]) {
                if (result.empty() || result.back() != nums2[j])
                    result.push_back(nums2[j]);
                j++;
            }

            else {
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        // remaining elements of nums1
        while (i < nums1.size()) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }

        // remaining elements of nums2
        while (j < nums2.size()) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};