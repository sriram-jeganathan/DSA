#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main ( void ) {
	int n, m;
	cout << "Enter no of vertices and edges: ";
	cin >> n >> m;

	vector<int> adj[n+1];

	for ( int i = 1; i <= m; i++ ) {
		int x, y;
		cout << "Enter the end points of the edge: ";
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for ( int i = 1; i <= n; i++ ) {
		cout << i << ": ";
		for ( auto j : adj[i] ) {
			cout << j << " ";
		}
		cout << "\n";
	}



	return 0;
}
