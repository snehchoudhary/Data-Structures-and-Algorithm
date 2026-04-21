#include<iostream>
using namespace std;
int main(){
    string str1 ="Yaar tera superestar desi kalakaar" ;
    string str2 = "star";
    if(str1.find(str2) == string::npos){
        cout <<"Not found" << endl;
    }
    else{
        cout<< "Found" << endl;
    }
}