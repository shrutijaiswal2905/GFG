class Solution {
  public:
    int vowelCount(string& s) {
       int n=s.size();
       int a=0;
       int e=0;
       int i=0;
       int o=0;
       int u=0;
       for(int ind=0;ind<n;ind++){
           if(s[ind]=='a'){
               a++;
           }
           else if(s[ind]=='e'){
               e++;
           }
           else if(s[ind]=='i'){
               i++;
           }
           else if(s[ind]=='o'){
               o++;
           }
           else if(s[ind]=='u'){
               u++;
           }
       }
       int temp=0;
       temp=min(1,a)+min(1,e)+min(1,i)+min(1,o)+min(1,u);
       if(temp==0)return 0;
       int fact_temp=1;
       while(temp>0){
           fact_temp=fact_temp*temp;
           temp--;
       }
       
       return fact_temp*max(1,a)*max(1,e)*max(1,i)*max(1,o)*max(1,u);
    }
};