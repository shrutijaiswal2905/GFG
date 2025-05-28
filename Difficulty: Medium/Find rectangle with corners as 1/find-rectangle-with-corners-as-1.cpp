class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        vector<vector<int>> points; 
        for(int i=0;i<mat.size();i++){      
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    points.push_back({i,j});
                }
            }
        }
        for(int i=0;i<points.size();i++){    
            for(int j=i+1;j<points.size();j++){
                if(points[i][0]!=points[j][0] && points[i][1]!=points[j][1]){
                    int x1=points[i][0], y1=points[i][1];
                    int x2=points[j][0], y2=points[j][1];
                    if(mat[x1][y2] && mat[x2][y1]) return true;
                }
            }
        }
        return false;
    }
};