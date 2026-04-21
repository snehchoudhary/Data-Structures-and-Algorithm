#include<iostream>
using namespace std;
int main(){
    string str1 ="sneha";
    string str2 ="sneha";

    if(str1.compare(str2) == 0){
        cout <<"Matching" << endl;
    }
    else{
        cout << "Not matcing" << endl;
    }
}