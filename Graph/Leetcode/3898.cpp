// Find Degree of Each Vertex

vector<int> findDegrees(vector<vector<int>>& matrix) {
	int n = matrix.size();
	vector<int> res(n);

    	for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            		if (matrix[i][j] == 1)
                		res[i]++;
        		}
    		}

    return res;
}
