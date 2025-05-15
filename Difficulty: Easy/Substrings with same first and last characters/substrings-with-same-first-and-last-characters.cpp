//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int count= s.size();
        // freq of letters
        vector<int>freq(26,0);
        //counting freq
        for(auto it:s){
            freq[it-'a']++;
        }
        //accessing freq
        for(auto it:freq){
            // nC2 = (n*(n-1))/2;
            count += (it*(it-1))/2;
        }
        // return ans
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends