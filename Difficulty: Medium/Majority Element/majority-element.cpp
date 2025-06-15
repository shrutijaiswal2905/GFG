class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> freq;
        int n= arr.size();
        for(int num:arr){
            freq[num]++;
            if(freq[num]>n/2){
                return num;
            }
        }
        return -1;
    }    
};
        