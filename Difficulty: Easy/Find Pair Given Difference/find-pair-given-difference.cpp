
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        unordered_set<int> set;
        for(int i=0; i<arr.size();i++){
            if(set.count(x+arr[i]) || set.count(arr[i] - x)){
                return true;
            }
            set.insert(arr[i]);
        }
        return false;
    }
};
