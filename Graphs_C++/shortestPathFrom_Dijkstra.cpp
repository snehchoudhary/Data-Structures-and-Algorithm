#include<iostream>
#include<unordered_map>
#include<stack>
#include<list>
#include<vector>
#include<limits.h>
#include<set>
using namespace std;

class Graph{
    public:
unordered_map<int, list<pair<int, int>>> adj;
Graph() {}
void addEdge(int u, int v, int wt, int direction){
    //direction 0 ->undirected
    //direction 1 -> directed
    if(direction == 1){
        adj[u].push_back({v, wt});
    }
    else{
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
}
void DijkstraShortestDistance(int n, int src, int des){
    vector<int>dist(n+1, INT_MAX);
    //creaate set
    set<pair<int, int> >st;

    //maintain initial set -> (0,src)
    st.insert({0,src});
    dist[src] =0;
   
   //distance update logic
   while(!st.empty()){
    auto topElement = st.begin();
    pair<int, int>topPair = *topElement;
    int topDist = topPair.first;
    int topNode = topPair.second;
    //remove the top Node
    st.erase(st.begin());

    //update dist of neighbour
    for(pair<int, int>nbrPair: adj[topNode]){
         int nbrNode = nbrPair.first;
        int nbrDist = nbrPair.second;

        if(topDist + nbrDist < dist[nbrNode]){
            //found a new shorter distance
            //now update ->
            //set ki entry
            auto previousEntry = st.find({dist[nbrNode], nbrNode});
            if(previousEntry != st.end()){
                //entry present in set
                st.erase(previousEntry);
            }
            //distance ka array
            dist[nbrNode] = topDist + nbrDist ;
            //create a new entry for the distance in the node
            st.insert({dist[nbrNode], nbrNode});
        }
    }
   }
   cout << "Shortest Distance from" << src << "Node to" << des << "Node: " << dist[des] << endl;
}
};
int main(){
    Graph g;
     g.addEdge(1,6,14,0);
     g.addEdge(1,3,9,0);
     g.addEdge(1,2,7,0);
     g.addEdge(2,3,10,0);
     g.addEdge(2,4,15,0);
     g.addEdge(3,4,11,0);
     g.addEdge(6,3,2,0);
     g.addEdge(6,5,9,0);
     g.addEdge(5,4,6,0);

     int n =6;
     int src = 6;
     int des = 4;

     g.DijkstraShortestDistance(n, src, des);
}