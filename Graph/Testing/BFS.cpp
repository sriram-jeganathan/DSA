#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main ( void ) {
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

	queue<int> q;
	int vis[n+1] = {0};
	vis[1] = 1;
	q.push(1);
	vector<int> bfs;

	for ( !q.empty() ) {
		int Node = q.front();
		q.pop();
		bfs.push_back(Node);

		for ( int j : adj[Node] ) {
			if ( !vis[j] ) {
				vis[j] = 1;
				q.push(j);
			}
		}
	}

	return 0;
}
