class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        
        int n = arr.size() ;
        int count = 0 ;
        int left = 0 ;
        int right = 0 ;
        unordered_map<int , int> mp ;
        
        while(right < n) {
            ++mp[arr[right]] ;
            while(left < n && mp.size() > k) {
                --mp[arr[left]] ;
                if(mp[arr[left]] == 0)
                    mp.erase(arr[left]) ;
                ++left ;
            }
            if(mp.size() <= k)
                count += right - left + 1 ;
            ++right ;
        }
        
        return count ;
        
    }
};