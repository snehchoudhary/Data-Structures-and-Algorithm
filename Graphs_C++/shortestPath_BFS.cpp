#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;

class Graph{
public:
 unordered_map<int, list<int>>adj;
  void addEdge(int u, int v, bool direction){
  //direction -> 0 undirected
  //direction -> 1 directed
  if(direction ==1 ){
    adj[u].push_back(v);
  }
  else{
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  }
  void shortestPath_BFS(int src, int destination){
    queue<int>q;
    unordered_map<int, bool>visited;
    unordered_map<int, int>parent;
    
    //intitial state
    q.push(src);
    visited[src] = true;
    parent[src] =-1;

    //bfs chlate hai
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto neighbour: adj[frontNode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                parent[neighbour] = frontNode;
                visited[neighbour] = true;
            }
        }
    }
    //parent array taiyar hoga
    vector<int>ans;
    while(destination != -1){
        ans.push_back(destination);
        destination = parent[destination];
    }
    reverse(ans.begin(), ans.end());
    //printing the shortest path
    for(auto i: ans){
        cout << i << " ";
    }
  }
};
int main(){
      Graph g;
    g.addEdge(0,5,0);
    g.addEdge(5,4,0);
    g.addEdge(4,3,0);
    g.addEdge(0,6,0);
    g.addEdge(6,3,0);
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);

    int n = 8;
    int src = 0;
     int destination = 3;
     g.shortestPath_BFS(src, destination);

}