class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> res;
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (i>0) mat[i][j] += mat[i-1][j];
                if (j>0) mat[i][j] += mat[i][j-1];
                if (i>0 && j>0) mat[i][j] -= mat[i-1][j-1];
            }
        }
        
        int qr = queries.size(), cn=0;
        
        while (cn<qr) {
            int r1 = queries[cn][0];
            int c1 = queries[cn][1];
            int r2 = queries[cn][2];
            int c2 = queries[cn][3];
            
            int slab1=0, slab2=0, slab3=0;
            
            if (c1>0) slab1 = mat[r2][c1-1];
            if (r1>0) slab2 = mat[r1-1][c2];
            if (r1>0 && c1>0) slab3 = mat[r1-1][c1-1];
            
            int ans = mat[r2][c2]-(slab1+slab2-slab3);
            
            res.push_back(ans);
            
            cn++;
        }
        
        return res;
    }
};