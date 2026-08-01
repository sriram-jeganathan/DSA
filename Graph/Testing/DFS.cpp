class Solution {
public:
    void dfs(int start, vector<vector<int>>& graph, vector<int>& path, vector<vector<int>>& paths) {
        path.push_back(start);

        // reached target
        if (start == graph.size() - 1) {
            paths.push_back(path);
            path.pop_back();
            return;
        }

        for (auto it : graph[start]) {
            dfs(it, graph, path, paths);
        }

        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        vector<int> path;
        vector<vector<int>> paths;

        dfs(0, graph, path, paths);

        return paths;
    }
};