// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        for(int i=0;i<arr.size();i++){
            if( x==arr.at(i) || x<arr.at(i)){
                return i;
            }
        }return -1;
    }
};