#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( void ) {
	int n, m;
	cin >> n >> m;

	// n = number of vertices
	// m = number of edges
	
	vector<vector<int>> adj( n+1, vector<int>(n+1,0) );

	for ( int i = 0; i < m; i++ ) {
		int x, y;
		cin >> x >> y;

		// In an undirected graph, We are required to mark the compliment of
		// the same index.
		//
		// In a directed graph, we only need to mark the entered index as such
		adj[x][y] = 1;
		adj[y][x] = 1; // This wouldnt be needed in directed matrix
	}

	for ( int i = 1; i <= n; i++ ) {
		for ( int j = 1; j <= n; j++ ) {
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
