#include<iostream>
using namespace std ;
/*-----------------------------------------------------*/
// *adjacency matrix for undirected graph :

int  main(){
  int n, m;
  cin >> n >> m; 
  int adj[n + 1][n + 1];
  for (int i = 0; i < m; i++){
    int u, v;  // there is an edge between u and v
    cin >> u >> v;
    adj[u][v] = 1;
    adj[v][u] = 1; // this statement will be removed in case of directed graph
  }
  return 0;
}














/*-----------------------------------------------------*/

/**
*!Graph Representations

** After understanding the input format, let us try to understand how the graph can be stored.  The two most commonly used representations for graphs are

**  Adjacency Matrix
**  Adjacency Lists

*TODO:              Adjacency Matrix

*? TC - O(n) ; SC - O(n*n)
**An adjacency matrix of a graph is a two-dimensional array of size n x n, where n is the number of nodes in the graph, with the property that a[ i ][ j ] = 1 if the edge (vᵢ, vⱼ) is in the set of edges, and a[i][j] = 0 if there is no such edge.

*/