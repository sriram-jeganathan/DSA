#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( void ) {
	// Creating adjacency list
	int n, m;
	cin >> n >> m;
	vector<int> adj[n+1];
	for ( int i = 1; i <= m; i++ ) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back[y];
		adj[y].push_back[x];
	}

	// BFS Traversal
	
	queue<int> q;
	int vis[n+1] = {0};
	vector<int> bfs;
	vis[1] = 1;
	q.push(1);

	while ( !q.empty() ) {
		int Node = q.front();
		q.pop();
		bfs.push_back(Node);
		for ( int i = 1; i <= n; i++ ) {
			if ( !vis[i] ) {

			}
		}
	}
	

	return 0;
}
