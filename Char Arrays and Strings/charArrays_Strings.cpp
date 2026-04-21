#include<iostream>
using namespace std;

//length of a string
int findLength(char ch[], int size){
    int length =0;
    for(int i=0; i<size; i++){
        if(ch[i] == '\0'){
            break;
        }
        else{
            length ++;
        }
    }
    return length;
}

//Reverse a string
void reverseString(char name[], int n){
    int i=0;
    int j = n-1;
    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    cout << "Length of a string: " << len << endl;

    char name[100];
    cin.getline(name, 100);
    cout << "Before" << " " << name << endl;
    reverseString(name, len);
    cout << "After" << " " <<  name << endl;
}