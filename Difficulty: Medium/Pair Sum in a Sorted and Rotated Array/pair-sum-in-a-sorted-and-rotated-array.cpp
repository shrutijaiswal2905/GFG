// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int n= arr.size();
        int i;
        for(i =0; i< n-1; i++){
            if(arr[i] > arr[i+1]){
                break;
            }
        }
        int l= (i+1) % n;
        int r= i;
        while(l != r){
            if(arr[l] + arr[r] == target)
               return true;
            if(arr[l] + arr[r] < target)
               l=(l+1) % n;
            else{
            r= (n+r-1) %n;
            }
        }
        return false;
    }
};