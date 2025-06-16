/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int totgas=0, totcost=0;
        int start = 0, currgas=0;
        
        for(int i=0; i< gas.size(); i++){
            totgas+=gas[i];
            totcost+= cost[i];
            currgas+= (gas[i] - cost[i]);
            
            if(currgas < 0){
                start = i+1;
                currgas =0;
            }
        }
        return totgas< totcost ? -1 : start;
       
    }
};