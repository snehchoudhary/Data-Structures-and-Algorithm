#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;

class Graph{
public:
unordered_map<int, vector<int> >adjList;
//make a function which will add list in the adjacececy list
void addEdge(int u, int v, bool direction){               //int u = starting point and int v = ending point
    // direction ->0 ->undirected
    //direction ->1 ->directed

    if(direction == 1){
        //u se v ki traf ek edge h
        //iss case m u ki adjacency list m v ko insert kr do
        adjList[u].push_back(v); 
    }
    else{
        //direction = 0;
        //dono traf edge hoti h
        //u ki adjacency list m v ko insert kro and v ki adjscency list m u koinsert kro
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout << endl << "Printing adjlist" << endl;
    printAdjList();
    cout << endl;
}
void printAdjList(){
    for(auto i: adjList){               // i pair hai int , list of int ka
    cout << i.first << "-> {";
    for(auto neighbour : i.second){
        cout << neighbour << ", ";
    }
    cout << "}" << endl;

    }
}
bool checkCycleUndirectedBFS(int src){
    queue<int>q;
    unordered_map<int, bool>visited;
    unordered_map<int, int>parent;
    //initial state
    q.push(src);
    visited[src] = true;
    parent [src] =-1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto neighbour: adjList[frontNode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
            else if(visited[neighbour] == true && neighbour != parent[frontNode]){
                //cycle present
                return true;
            }

        }
    }
    //cycle present
    return false;
}
};
int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    g.addEdge(3,4,0);
    g.addEdge(2,5,0);
    int src = 0;
    bool isCyclic = g.checkCycleUndirectedBFS(src);
    if(isCyclic){
        cout << "Cycle Present" ;
    }
    else{
        cout << "Cycle not present";
    }
    return 0;
}