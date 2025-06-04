class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        set<int>s1(arr1.begin(),arr1.end());
        set<int>s2(arr2.begin(),arr2.end());
        set<int>s3(arr3.begin(),arr3.end());
        
        vector <int> result;
        for(int val :s1){
            if(s2.count(val) && s3.count(val)){
                result.push_back(val);
            }
        }
        if(result.empty()){
            result.push_back(-1);
        }
        return result;
    }
};