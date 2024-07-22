class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(auto num:nums){
            v.push_back(num);
        }
        for(auto num:nums){
            v.push_back(num);
        }
        return v;
    }
};