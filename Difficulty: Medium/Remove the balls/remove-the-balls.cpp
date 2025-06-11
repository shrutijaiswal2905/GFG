class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        int n = color.size();
        stack <pair<int, int>> S;
        
        for(int i = 0; i < n; i++){
            pair<int, int> curr = make_pair(color[i], radius[i]);
            
            if(S.empty()) S.push(curr);
            else{
                pair <int, int> prev = S.top();
                if(curr == prev) S.pop();
                else S.push(curr);
            }
        }
        
        return (int)S.size();
        
    }
};