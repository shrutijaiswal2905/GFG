class Solution {
  public:
    // Function to arrange all letters of a string in lexicographical
    // order using Counting Sort.
    string countSort(string s) {
       
        int n=s.size();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        string result="";
        int m=count.size();
        for(int j=0; j<m;j++){
            result.append(count[j],'a'+j);
        }
        return result;
        // code here
    }
};