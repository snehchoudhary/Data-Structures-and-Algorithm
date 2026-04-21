#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* createTree(){
    cout << "Enter the value: "<<endl;
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    Node* rootNode = new Node(data);
    //create left subtree by recursive call
    rootNode->left = createTree();
    //create right subtree by recursive call
    rootNode->right = createTree();
    return rootNode;
}
int main(){
    Node*root = createTree();
    cout << "Created tree is as follows:" << endl;
    cout << root->data << endl;
}