class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto i = find(nums.begin(), nums.end(), target);
        if(i!= nums.end()){
            return distance(nums.begin(),i);
        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        i = find(nums.begin(), nums.end(), target);
        if(i!= nums.end()){
            return distance(nums.begin(),i);
        }
        return 0;
    }
};