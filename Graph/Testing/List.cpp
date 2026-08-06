#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adjList ( int n, int m ) {
	vector<vector<int>> adj;

	for ( int i = 0; i < n; i++ ) {
		int x, y; 
		cout << "X, Y -> ";
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	return adj;
}

int main ( void ) {
	int n, m;
	cout << "N - M: -> ";
	cin >> n >> m;
	
	vector<vector<int>> adj = adjList ( n, m );

	for ( int i = 0; i < m; i++ ) {
		cout << i << " -> ";
		for ( auto it : adj[i] ) {
			cout << it << " ";
		}
		cout << "\n";
	}

	return 0;
}
