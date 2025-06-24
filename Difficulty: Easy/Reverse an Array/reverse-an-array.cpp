class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int first = 0, second = n-1;
        while(first < second){
            
            swap(arr[first], arr[second]);
            first ++;
            second --;
            
        }
    }
};