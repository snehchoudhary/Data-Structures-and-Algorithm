#include<iostream>
#include<string>
using namespace std;

void printPermutation(string str, int index){
if(index>= str.length()){
    cout << str << " ";
    return;
}
for(int j=index; j<str.length(); j++){
    swap (str[index], str[j]);
    //recursive call
    printPermutation(str, index+1);
}
}
int main(){
    string str ="abc";
    int index =0;
    printPermutation(str, index);
}