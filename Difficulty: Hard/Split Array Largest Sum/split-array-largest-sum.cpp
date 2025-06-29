class Solution {
  public:
    bool check(vector<int>&nums , int mid , int k){
        long long sum = 0;
        long long cnt = 0;
        int i = 0;
        while(i < nums.size()){
            if(nums[i] > mid) return false;
            sum += nums[i];
            if(sum > mid){
                sum = nums[i];
                cnt++;
            }
            i++;
        }
        
        return (cnt+1) <= k;
    }
  
    int splitArray(vector<int>& arr, int k) {
        long long end = accumulate(arr.begin(),arr.end(),0);
        long long start = 0;
        long long res;
        while(start <= end){
            long long mid = (start + end) / 2;
            if(check(arr,mid,k)){
                res = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return res;
    }
};