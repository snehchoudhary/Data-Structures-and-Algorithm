#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;

template<typename T>
class Graph{
public:
unordered_map<int, list<pair<T, int>>>adjList;

void addEdge(T u,int v, int wt, bool direction){
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
        for(pair<T,int>p: i.second){
            cout <<"{" <<p.first << ", " <<p.second << "}, ";
        }
        cout << "}" << endl;
    }
}

void bfsTraversal(T src){
    //adjList already data member m h
    //visited
    unordered_map<T, bool> vis;
    queue<T>q;

    //maintain initial state
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        T frontNode = q.front();
        cout << frontNode << " ";
        q.pop();

        //go to neighbour
        for(auto neighbour : adjList([frontNode])){
            T neighbourData = neighbour.first;
        }
        if(!vis[neighbourData]){
            q.push(neighbourData);
            vis[neighbourData] = true;
        }
    }
}
};

int main(){
    // Graph <int> g;
    // g.addEdge(0,1,5,1);
    // g.addEdge(1,2,10,1);
    // g.addEdge(1,3,20,1);
    // g.addEdge(2,3,50,1);

     Graph <char> g;
    g.addEdge('a','b',5,1);
    g.addEdge('b','c',10,1);
    g.addEdge('b','c',20,1);
    g.addEdge('c','d',50,1);

    g.bfsTraversal('a');
    return 0;
}