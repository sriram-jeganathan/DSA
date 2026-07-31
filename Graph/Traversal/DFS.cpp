#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

void dfs ( int start, vector<int> adj[], int vis[] , vector<int> &res ) {
	vis[start] = 1;
	res.push_back(start);

	for ( auto it : adj[start] ) {
		if ( !vis[it] ) {
			dfs( it, adj, vis, res );
		}
	}
}

int main ( void ) {
	
	// Adjacency List
	
	int n, m;
	cout << "N, M -> ";
	cin >> n >> m;

	vector<int> adj[n+1];

	for ( int i = 1; i <= m; i++ ) {
		int x, y;
		cout << "X - Y -> ";
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	// DFS Traversal
	
	vector<int> res;
	int vis[n+1] = {0};
	
	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) {
			dfs ( i, adj, vis, res );
		}
	}

	cout << "\nDFS Traversal: " << endl;
	for ( int i = 0; i < n; i++ ) {
		cout << res[i] << " ";
	}
	
	return 0;
}
