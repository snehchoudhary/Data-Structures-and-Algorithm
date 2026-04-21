// we are given with a string, we have to tell the frequency of characters coming in it
#include<iostream>
#include<map>                                    //If I don't write unordered then by default it is ordered map
using namespace std;

void countCharacters(map<char,int>&mapping, string str){
    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        mapping [ch]++;      // increments the value associated with the key ch in the mapping data structure
    }
}

int main(){
string str ="lovebabbar";
map<char,int>mapping;
countCharacters(mapping, str);

//traversing on map
for(auto i: mapping){     //This declares a loop variable i of type auto and iterates over each element in the container mapping.
    cout << i.first << " -> " << i.second <<endl;
}
}