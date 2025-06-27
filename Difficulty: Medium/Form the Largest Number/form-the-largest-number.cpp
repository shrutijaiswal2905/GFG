#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLargest(vector<int>& arr) {
        vector<string> strArr;
        
        // Convert integers to strings
        for (int num : arr) {
            strArr.push_back(to_string(num));
        }

        // Custom comparator
        sort(strArr.begin(), strArr.end(), [](string a, string b) {
            return a + b > b + a;
        });

        // Handle all zeros case
        if (strArr[0] == "0") {
            return "0";
        }

        // Concatenate the result
        string result = "";
        for (string s : strArr) {
            result += s;
        }

        return result;
    }
};

