#include<iostream>
#include<unordered_map>
#include<stack>
#include<list>
#include<map>
#include<queue>
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
  void printAdjList(){
    for(auto i: adj){
        cout << i.first << ": {";
        for(auto j: i.second){
           cout << j << ", ";
        }
        cout << "}" << endl;
    }
  }

  void topoSortDfs(int src,map<int, bool>&visited, stack<int>&st){
    visited[src] = true;
    for(auto neighbour: adj[src]){
       if(!visited[neighbour]){
        topoSortDfs(src, visited, st);
       }
    }
    st.push(src);
  }

  void topoSortBFS(int n){
    queue<int>q;
    unordered_map<int, int>indegree;

    //initialise krdi indegree
    for(auto i : adj){
        for(auto neighbour : i.second){
            indegree[neighbour]++;
        }
    }
    //for printing indegree
    // for(auto i: indegree){
    //     cout << i.first << "-> " << i.second << endl;
    // }

    //push all zero indegree wali node in queue
    for(int node = 0; node < n; node++){
       if(indegree[node] == 0){
        q.push(node);
       }
    }
    // BFS chlate h
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        cout << frontNode << ", ";

        //ye node hata diya toh uske children ki indegree minus krni pdegi
        for(auto neighbour : adj[frontNode]){
           indegree[neighbour]--;

           //check for zero
           if(indegree[neighbour] == 0){
            q.push(neighbour);

           }
        }
    }
  }
};
int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(2,4,1);
    g.addEdge(3,5,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(5,7,1);

    g.printAdjList();
    int n =8;
    g.topoSortBFS(n);
    
    // int n =8;
    // map<int, bool>visited;
    // stack<int>st;
    // for(int node =0; node<n; node++){
    //     if(!visited[node]){
    //         g.topoSortDfs(node, visited, st);
    //     }
    // } 
    // cout << "Printing the topo order"<< endl;
    // while(!st.empty()){
    //     cout << st.top();
    //     st.pop();
    // }
}