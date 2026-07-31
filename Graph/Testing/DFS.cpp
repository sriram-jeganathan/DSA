#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs ( int node, vector<int> adj, int vis[], vector<int> res; ) {
	vis[node] = 1;
	res.push_back(node);

	for ( auto i : adj[node] ) {
		if ( !vis[i] ) {
			dfs ( i, adj, vis, res );
		}
	}
}

int main ( void ) { 
	int n, m;
	cin >> n >> m;
	vector<int> adj[n+1];
	for ( int i = 1; i <= m; i++ ) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x)
	}

	vector<int> res;
	int vis[n+1] = {0};

	for ( int i = 1; i <= n; i++ ) {
		if ( !vis[i] ) {
			dfs ( i , adj, vis, res );
		}
	}

	return 0;
}
