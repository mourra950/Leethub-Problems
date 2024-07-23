class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int counter = 0;
        for(auto num:nums){
            if(num%3==0)
                ++counter;
        }
        return nums.size()-counter;
    }
};