#include<iostream>
using namespace std;
int main(){
    string name = "Love Babbar";
    string middle = "Kumar " ; 
    string str = name.insert(5, middle);          //from character 5 insert middle
    cout << str << endl;
}