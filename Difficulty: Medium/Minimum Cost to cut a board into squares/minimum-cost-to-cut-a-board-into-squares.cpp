class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        sort(x.begin(),x.end(),greater<int>());
        sort(y.begin(),y.end(),greater<int>());
        
        int h=1;
        int v=1;
        int i=0,j=0;
        int cost=0;
        while(i<m-1 && j<n-1){
            if(x[i]>=y[j]){
                cost+=x[i]*h;
                v++;
                i++;
            }
            else{
                cost+=y[j]*v;
                h++;
                j++;
            }
        }
        while(i<m-1){
            cost+=x[i]*h;
                v++;
                i++; 
        }
        while(j<n-1){
             cost+=y[j]*v;
                h++;
                j++;
        }
        return cost;
    }
};
