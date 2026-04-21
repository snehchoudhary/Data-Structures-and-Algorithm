#include<iostream>
#include<vector>
using namespace std;

// void print(vector<int>v){
//     int size = v.size();
//     for(int i=0; i<size; i++){
//         cout << v[i] << endl;
//     }
// }
// Another method for function of vector

void print2(vector<int>v){
    cout << "Printing vector by method 2" <<endl;
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}


int main(){
    vector<int>v ;              //is an array only
    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print2(v);
   cout << endl;
    //to delete from backwards
    v.pop_back();
    cout << "print after deletion" << endl;
    print2(v);
     cout << endl;
    //to clear whole data
    // v.clear();

    cout << "initialisation" << endl;
    vector<int>arr;                    //default with no data, 0 size
    vector<int>arr2(5,-1);            //size : 5 ; data : -1
    print2(arr2);
    cout << endl;
    vector<int>arr3 = {1,2,3,4,5};
    print2(arr3);

    cout << "How to copy vector ??" << endl;
    vector<int>arr5 = {9,8,7,6,5,4};
    vector<int>arr6(arr5);
    print2(arr6);

    vector<char>p ;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    cout << "Front element: " << v.front() << endl;
    cout << "End element: " << v.back() << endl;
    cout << endl;
   
}