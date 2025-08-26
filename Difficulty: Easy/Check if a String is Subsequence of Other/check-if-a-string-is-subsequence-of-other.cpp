class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int n=s2.length();
        int m=s1.length();
        
        int x=0;
        for(int i=0; i<n; i++){
            if(x<m && s1[x]==s2[i]) x++;
        }
        
        return x==m;
    }
};