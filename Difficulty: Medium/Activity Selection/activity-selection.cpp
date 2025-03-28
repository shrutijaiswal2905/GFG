//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int, int>>v;
        int n=start.size();
        
        for(int i=0; i<n; i++){
            v.push_back({finish[i], i});
        }
        
        sort(v.begin(), v.end());
        
        int prevE=v[0].first;
        
        int cnt=1;
        
        for(int i=1; i<n; i++){
            int ind=v[i].second;
            
            if(start[ind]>prevE){
                prevE=finish[ind];
                cnt++;
            }
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends