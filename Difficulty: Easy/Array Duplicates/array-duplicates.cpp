class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;
        vector<int> result;

    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Collect elements that appear more than once
    for (auto pair : freq) {
        if (pair.second > 1) {
            result.push_back(pair.first);
        }
    }

    return result;
        
    }
};