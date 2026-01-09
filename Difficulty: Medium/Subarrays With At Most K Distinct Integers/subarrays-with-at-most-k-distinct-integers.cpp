class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
       unordered_map<int,int> mp;
       int i=0;
       int cnt=0;
       for(int j=0;j<arr.size();j++){
          mp[arr[j]]++;
          while(mp.size()>k){
              mp[arr[i]]--;
              if(mp[arr[i]]==0)mp.erase(arr[i]);
              i++;
          }
          cnt+=j-i+1;
       }
       return cnt;
        
    }
};