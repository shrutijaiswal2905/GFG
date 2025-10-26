class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>,  greater<int>> pq;
        
        int cost = 0;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            int sum = x+y;
            cost+=sum;
            pq.push(sum);
        }
        
        return cost;
    }
};