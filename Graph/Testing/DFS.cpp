#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, const vector<vector<int>>& graph,
         vector<int>& path, vector<vector<int>>& paths) {

    path.push_back(node);

    // Target reached
    if (node == static_cast<int>(graph.size()) - 1) {
        paths.push_back(path);
        path.pop_back();
        return;
    }

    // Explore neighbors
    for (int next : graph[node]) {
        dfs(next, graph, path, paths);
    }

    // Backtrack
    path.pop_back();
}

vector<vector<int>> allPathsSourceTarget(const vector<vector<int>>& graph) {
    vector<int> path;
    vector<vector<int>> paths;

    dfs(0, graph, path, paths);

    return paths;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }

    vector<vector<int>> paths = allPathsSourceTarget(graph);

    for (const auto& path : paths) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << '\n';
    }

    return 0;
}