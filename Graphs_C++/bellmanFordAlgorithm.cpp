#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<limits.h>
#include<vector>
using namespace std;

class Graph{
public:
unordered_map<char,list<pair<char, int> > > adjList; 

void addEdge(char u, char v, int wt, bool direction){
    //direction -> 0 ->undirected
    //direection -> 1 -> directed
    if(direction == 0){
        adjList[u].push_back({v, wt});
        adjList[v].push_back({u, wt});
    }
    else{
        adjList[u].push_back({v, wt});
    }
}
void printAdjList(){
    for(auto i: adjList){
        cout << i.first << "->" ;
        for(auto j: i.second){
            cout << "{" << j.first << ", " << j.second << "}, ";
        }
        cout << endl;
    }
}

void bellmanFord(int n, char src){
    //intial state
    vector<int>dist(n, INT_MAX);
    dist[src] = 0;
    //n-1 times relaxation....for this I have to traverse entire edge list
    for(int i=1; i<n; i++){
        //for traversing entire edge list
        for(auto a: adjList){
            for(auto b: a.second){
                char u =a.first;
                char v = b.first;
                int wt = b.second;
                if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                    dist[v] = dist[u]+wt;
                }
            }
        }
    }
    //yaha tk shortest distance ready hai
    //chck for negative cycle->1 baar relaxation or chlega
    //hme nhi pta ki kch update hua ya nhi toh ek flag hona bhut imp hai
    bool anyUpdate = false;
    for(auto a: adjList){
            for(auto b: a.second){
                char u =a.first;
                char v = b.first;
                int wt = b.second;
                if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                    anyUpdate = true;
                    break;
                    dist[v] = dist[u]+wt;
                }
            }
        }
        if(anyUpdate == true){
            cout <<"negative cycle present" << endl;
        }
        else{
            cout << "negative cycle absent" << endl;
        }
}
};
int main(){
    Graph g;
    g.addEdge('A', 'B', -1, 1);
    g.addEdge('B', 'C', 2, 1);
    g.addEdge('C', 'D', -3, 1);
    g.addEdge('D', 'E', 5, 1);
    g.addEdge('A', 'E', 4, 1);
    g.addEdge('B', 'E', 3, 1);
    g.addEdge('B', 'D', 2, 1);
    g.addEdge('D', 'B', 1, 1);

    g.printAdjList();
    int n =5;
    char src = 'A';
    g.bellmanFord(n , src);
}