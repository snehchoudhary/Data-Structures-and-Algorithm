#include<iostream>
using namespace std;

//Each node in the Trie typically contains:

//A value (char val in this case).
//Pointers to its child nodes (children array).
//A boolean flag indicating whether the node represents the end of a valid word (isTerminal).


class trieNode{
public:
//node creation
char value;
trieNode*children[26];            //creating list of children of nodes, creating dynamic array,pointer of array, 26 bcoz there are 26 alphabets
bool isTerminal;

trieNode(char val){              //constructor or intialisation
    this->value = val;           //sets the node value
    for(int i=0; i<26; i++){
        children [i] = NULL;
    }
    this->isTerminal = false;    //why it set to false?? Becoz When a new trieNode is created, it represents a character in the Trie but not necessarily the end of a valid word. Setting isTerminal to false by default reflects this.
}
};

void insertWord(trieNode*root, string word){

    cout << "Received word " << word << " for insertion" << endl;
    //insertion--- will check for every character if present then traverse, if not then create
    //will use recursion because we have to use same thing again and again
    //base case
    if(word.length() == 0){    //the string is empty
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';     // index of current character- here we are subtracting the ASCII value of character stored in variable
                              //'ch' from the ASCII  value of a . e.g if 'ch' holds the character 'b' , then index will be 1 bcoz
                              //'b' is one position after 'a' in alphabet ."This operation gives the rlv posn of character in eng alphabet"
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
    insertWord(child, word.substr(1));  //substr extracting the charaacter at index 1 excluding the first one and continuing to the end
}

int main(){
    //creation of root node
    trieNode* root = new trieNode('-');
    insertWord(root, "dona");
}