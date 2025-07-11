// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string res = "";
        int n= s.size();
        for(int i =n-1; i>=0;i--){
            res +=s[i];
        }
        s = res;
        return s;
    }
};
