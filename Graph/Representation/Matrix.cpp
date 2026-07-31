#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( void ) { 
	int n, m;
	cout << "N, M -> ";
	cin >> n >> m;

	vector<vector<int>> adj(n, vector<int>(n, 0));

	for ( int i = 0; i < m; i++ ) {
		int x, y;
		cout << "X - Y -> ";
		cin >> x >> y;

		adj[x][y] = 1;
		adj[y][x] = 1;
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
