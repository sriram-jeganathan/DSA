#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

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

	cout << "\nAdjacency List: " << endl;

	for ( int i = 1; i <= n; i++ ) {
		cout << i << ": ";
		for ( auto j : adj[i] ) {
			cout << j << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	// BFS Traversal

	queue<int> q;
	vector<int> bfs;
	int vis[n+1] = {0};
	vis[1] = 1;
	q.push(1);

	while ( !q.empty() ) {
		int Node = q.front();
		q.pop();
		bfs.push_back(Node);

		for ( int i : adj[Node] ) {
			if ( !vis[i] ) {
				vis[i] = 1;
				q.push(i);
			}
		}
	}	
	
	cout << "BFS Traversal: " << endl;
	for ( int i : bfs ) {
		cout << i;
	}
	cout << "\n";

	return 0;
}
