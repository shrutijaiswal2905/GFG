class Solution {
  public:
    int transform(string A, string B) {
        int m = A.length(), n = B.length();
        if(m!=n){
            return -1;
            
            
        }
        int count[256] = {0};
        for(int i = 0; i < m; i++){
            count[A[i]]++;
            count[B[i]]--;
            
        }
        for(int i = 0; i < 256;i++){
            if(count[i] != 0){
                return -1;
            }
            
        }
        int res = 0;
        int i = m-1,j= n-1;
        while(i>=0){
            if(A[i]==B[j]){
                j--;
            }else{
                res++;
            }
            i--;
        }
        return res;
    }
        // code here.

};
