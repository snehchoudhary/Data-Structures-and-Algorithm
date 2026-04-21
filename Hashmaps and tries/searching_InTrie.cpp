#include<iostream>
using namespace std;

class trieNode{
public:
//node creation
char value;
trieNode*children[26];            //creating list of children of nodes, creating dynamic array,pointer of array, 26 bcoz there are 26 alphabets
bool isTerminal;

trieNode(char val){              //constructor or intialisation
    this->value = val;
    for(int i=0; i<26; i++){
        children [i] = NULL;
    }
    this->isTerminal = false;
}
};

void insertWord(trieNode*root, string word){

    cout << "Received word " << word << " for insertion" << endl;
    //insertion--- will check for every character if present then traverse, if not then create
    //will use recursion because we have to use same thing again and again
    //base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';     // index of current character
    trieNode*child ;
    if(root->children[index] != NULL){
        //present 
        child = root->children[index];
    }
    else{
        //absent
        child = new trieNode(ch);
        //linking
        root->children[index] = child;
    }
    //recursion
    insertWord(child, word.substr(1));
}

bool searchWord(trieNode*root, string word){
 //base case
 if(word.length() == 0){
    return root->isTerminal;
 }
 char ch = 0;
 int index = ch - 'a';
 trieNode*child;

 if(root->children[index] != NULL){
    //present or found
    child = root->children[index];
 }
 else{
    //not found
    return false;
 }
 //baaki recursion will handle
 bool recursionKaAns = searchWord(child, word.substr(1));
 return recursionKaAns;
}

int main(){
     //creation of root node
    trieNode* root = new trieNode('-');
     insertWord(root, "dona");
     insertWord(root, "crator");
     insertWord(root, "caring");
     insertWord(root, "care");
     insertWord(root, "love");
     insertWord(root, "lovely");

     cout << "Insertion done" << endl;
     

     cout << "searching begins" << endl;
     if(searchWord(root, "Love")){
       cout << "Found" << endl;
     }
     else{
        cout << "Not found" << endl;
     }
}