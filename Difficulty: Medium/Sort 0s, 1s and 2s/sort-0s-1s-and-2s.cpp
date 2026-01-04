class Solution {
  public:
    virtual void sort012(vector<int> &arr){
      int l=0, r=arr.size()-1;
      int i=0;
      
      while(i<=r){
        if(arr[i]==0){
          swap(arr[i], arr[l]);
          i++; l++;
        }else if(arr[i]==2){
          swap(arr[r], arr[i]);
          r--;
        }else{
          i++;    
        }      
      }
      
      return;
    }
};