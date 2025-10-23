class Solution {
  public:
    long long getDistanceSquared(const vector<int>& point) {
        // code here
        return (long long)point[0] * point[0] + (long long)point[1] * point[1];
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>> minHeap;
                    
        for (int i = 0; i < points.size(); i++) {
            long long dist = getDistanceSquared(points[i]);
            minHeap.push({dist, i});
        }
        
        vector<vector<int>> result;
        for (int i = 0; i < k; i++) {
            int idx = minHeap.top().second;
            result.push_back(points[idx]);
            minHeap.pop();
        }
        
        return result;
    }
};