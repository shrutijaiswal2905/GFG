class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string ans = "";
        int n = s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]) ans+=s[i];
        }
        ans+=s[n-1];
        return ans;
    }
};

