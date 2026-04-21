#include<iostream>
using namespace std;
int main(){
    string name = "This@is@a@car";
     string str = name.erase(4,3);     //from 4th index delete 3 characters
    cout << str << endl;
}