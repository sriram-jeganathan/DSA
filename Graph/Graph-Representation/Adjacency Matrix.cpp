#include <iostream>
#include <vector>
using namespace std;

int main ( void ) {
    int n, m;
    cin >> n >> m;
    // one based matrix
    int adj[n+1][n+1];

    // let the index m be greater than n
    for ( int i = 1; i < m; i++ ) { 
        int u, w;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}