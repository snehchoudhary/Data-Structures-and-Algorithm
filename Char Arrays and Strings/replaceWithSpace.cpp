#include <iostream>
using namespace std;

void replaceCharacter(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        char curr = ch[index];
        if(curr == '@'){
            ch [index] = ' ';
        }
        index ++;
    }
}
int main(){
    char ch[100];
    cout << "Enter any character" << endl;
    cin.getline(ch, 100);
    cout << "before: " << ch << endl;
    replaceCharacter(ch, 100);
    cout << endl << "after" <<endl<<  ch << endl;
}