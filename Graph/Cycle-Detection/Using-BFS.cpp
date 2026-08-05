#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool detectCycle ( int node, vector<vector<int>> &adj, int &vis[] ) {
	// { destination, source } - DS of Queue
	queue<pair<int,int>> q;
	vis[node] = 1;
	q.push({node,-1});

	while ( !q.empty() ) {
		int Node = q.front().first;
		int parent = q.front().second;
		q.pop();

		for ( auto it : adj[Node] ) {
			if ( !vis[it] ) {
				vis[it] = 1;
				q.push({it, Node});
			} else if ( parent != it ) {
				return true;
			}
		}
	}

	return false; 

}

int main ( void ) {
	int n, m;
	cout << "N, M -> :";
	cin >> n >> m;
	vector<vector<int>>;

	for ( int i = 0; i < m; i++ ) {
		int x, y;
		cout << "X-Y: ";
		cin >> x >> y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	int vis[n] = {0};
	for (int i = 0; i < n; i++) {
    		if (!vis[i]) {
        		if (detectCycle(i, adj, vis)) {
				cout << "Cycle" << endl;
				return 0;
			}
    		}
	}
	cout << "Acyclic" << endl;

	return 0;
}
