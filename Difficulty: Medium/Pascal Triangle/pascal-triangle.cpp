//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1) return {1};
        vector<int>ans={1, 1};
        if(n==2) return ans;
        for(int i=3; i<=n; i++){
            vector<int>temp(i, 1);
            for(int j=1; j<=i-2; j++){
                temp[j]=(ans[j-1]+ans[j]);
            }
            ans=temp;
        }
        return ans;
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends