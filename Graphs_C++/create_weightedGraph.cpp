#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

class Graph{
public:
unordered_map<int, list<pair<int, int>>>adjList;

void addEdge(int u,int v, int wt, bool direction){
    //direction = 0 ->undirected
    //direction = 1 ->directed graph
    if(direction == 1){
        // u -> v
        adjList[u].push_back(make_pair(v,wt));
    }
    else{
        //direction = 0;
        //u-----v
        //u->v
        //v->u
        adjList[u].push_back({v,wt});
        adjList[v].push_back({u,wt});
    }
    printAdjList();
    cout <<endl;
}
void printAdjList(){
    for(auto i: adjList){
        cout << i.first << ":{ ";
        for(pair<int,int>p: i.second){
            cout <<"{" <<p.first << ", " <<p.second << "}, ";
        }
        cout << "}" << endl;
    }
}
};

int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,10,1);
    g.addEdge(1,3,20,1);
    g.addEdge(2,3,50,1);
    return 0;
}