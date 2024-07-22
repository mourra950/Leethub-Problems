class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        int size= nums.size();
        for(auto num:nums){
            v.push_back(num);
        }
        for(auto num:nums){
            v.push_back(num);
        }
        return v;
    }
};