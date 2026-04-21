#include<iostream>
using namespace std;
int main(){
    //appending of one string in another string
    string str1  = "Sneha";
    string str2 = "Choudhary";
    cout << "before appending " <<endl;
    cout << str1 << endl;
    cout << str2 << endl;

    str1.append(str2);       //str1 m str2 add ho gya

    cout << "After appending: " << endl;
    cout << str1 << endl;
    cout << str2 << endl;

}