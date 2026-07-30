#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( void ) {
	int n , m;
	cin >> n >> m;

	vector<int> adj[n+1];

	for ( int i = 1; i <= m; i++ ) {
		int x, y;
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	for ( int i = 1; i <= n; i++ ) {
		cout << i << ": ";
		for ( int j : adj[i] ) {
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}
