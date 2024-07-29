class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int counter,maximum = 0 ;
        for(auto account : accounts){
            counter = 0;
            for(int i = 0;i<account.size();++i){
                counter+=account[i];
            }
            if(maximum<counter){
                maximum =counter;
            }
        }
        return maximum;
    }
};