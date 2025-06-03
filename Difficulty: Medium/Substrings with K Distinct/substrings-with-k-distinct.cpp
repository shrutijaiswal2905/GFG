class Solution {
  public:
    int countSubstr(string& s, int k) {
        unordered_map<char,int> mp;
        
        int i = 0;
        int j = 0;
        int n = s.size();
        int count = 0;

//finding the number of subtstrings with >=k+1 distinct characters 
        while(i<n && j<n)
        {
            mp[s[j]]++;
            if(mp.size()==k+1)
            {
                while(mp.size() == k+1)
                {
                    count = count + n - j;
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        
        i = 0;
        j = 0;
        int count2 = 0;
        mp.clear();

//finding the number of substring with >=k distinct characters
        while(i<n && j<n)
        {
            mp[s[j]]++;
            if(mp.size() == k)
            {
                while(mp.size()==k)
                {
                    count2 = count2 + (n-j);
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }

//finding their difference....
        int ans =count2 - count;
        return ans;
    }


};