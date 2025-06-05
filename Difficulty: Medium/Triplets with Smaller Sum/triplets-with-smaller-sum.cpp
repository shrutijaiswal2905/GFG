class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort(arr,arr+n);
        long long count=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                long long count_sum=arr[i]+arr[j]+arr[k];
                if(count_sum< sum){
                    count+=k-j;
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return count;
        
    }
};