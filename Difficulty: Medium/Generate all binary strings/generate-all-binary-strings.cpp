class Solution {
  public:
    vector<string> binstr(int n) {
      vector<string>ans;
      for(int i=0;i<pow(2,n);i++){
          string temp=bitset<16>(i).to_string();
          string temp2 = temp.substr(16 - n);
          ans.push_back(temp2);
      }
      return ans;
    }
};