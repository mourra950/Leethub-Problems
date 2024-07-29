class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num_map;
        for(auto num : nums)
        {
            num_map[num]++;
            
            if(num_map[num]>1){
                return true;
            }
        }
        return false;
    }
};