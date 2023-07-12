#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n , m ;
  cin >> n >> m;
  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++){
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return 0;
}










/**
*TODO:              Adjacency Lists
*! space complexity - O(2E)  because every edge has 2 nodes
** In the previous storing method, we saw it was taking n² space to store the graph, this is where the adjacency list comes into the picture, it takes a very less amount of space.

** This is a node-based representation. In this representation, we associate with each node a list of nodes adjacent to it. Normally an array is used to store the nodes. The array provides random access to the adjacency list for any particular node.

*TODO :  Steps
** we create an array of (n+1) size
** this array will contain a list or a vector of int.
*? vector <int> adj[n+1]
** motive of this vector ->

*! to store neighbours
*/