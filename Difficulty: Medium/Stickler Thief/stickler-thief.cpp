//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        int n =arr.size();
        if(n==0) return 0;
        
        if(n== 1) return arr[0];
        
        int prev=arr[0];
        int curr = max(arr[0],arr[1]);
        
        for(int i=2; i<n;i++){
            int temp = max(curr,arr[i]+ prev);
            prev = curr;
            curr = temp;
        }
        return curr;
    }    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends