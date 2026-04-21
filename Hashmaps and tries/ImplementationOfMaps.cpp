#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int>mapping;

    //creating pair
    //3 ways

    pair<string,int>p = make_pair("Love", 25);

    pair<string,int>q ("Deepansh", 21);

    pair<string,int>r;
    r.first = "arun";
    r.second = 21;

    //insertion

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    mapping["Babbar"] = 24;

    //access
    // 2 ways
    cout << mapping.at("Love") << endl;
    cout << mapping["Babbar"] << endl;

    cout << "Size of mapping is: " << mapping.size() << endl;

    //searching for key in map
    cout << mapping.count("Love") << endl;              //1 will print in this case as love is present in map
    cout << mapping.count("Sneha") << endl;             //0 will print in this case as sneha is not present in this case

    //best way of searching
    if(mapping.find("Love") != mapping.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    cout << mapping["Kumar"] << endl;                 //In this case no element of name kumar is not present that's why 0 will print
    cout << mapping.size() << endl;                   //as element kumar was not present, therefore, it inserted automatically and size of map has been inc by 1
    
    
}