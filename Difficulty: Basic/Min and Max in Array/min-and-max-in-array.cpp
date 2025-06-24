class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int max = arr[0];
        int min = arr[0];
        if(arr.size()==1){
            max = arr[0];
            min = arr[0];
        }
        for(int i = 1 ; i <arr.size();i++){
            if(arr[i] > max){
                max = arr[i];
            }
            if(arr[i] < min){
                min = arr[i];
            }
        }
        return {min, max};
    }
};