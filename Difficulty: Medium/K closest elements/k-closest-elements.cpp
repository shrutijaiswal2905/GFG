class Solution {
  public:
    static bool cmp(pair<int,int> v1, pair<int,int> v2){
        if(v1.first == v2.first){
            return (v1.second >= v2.second);
        }
        return (v1.first < v2.first);
    }
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        vector<pair<int,int>> a;
        
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] != x)
            {
                a.push_back({abs(x-arr[i]),i});
            }
        }
        
        sort(a.begin(),a.end(),cmp);
        
        vector<int> res(k);
        for(int i =0; i<k;i++)res[i] = arr[a[i].second];
        
        return res;
    }
};