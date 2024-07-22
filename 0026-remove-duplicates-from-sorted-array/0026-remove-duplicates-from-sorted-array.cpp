class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter = 0, current = -101;
        
        for(int i =0;i<nums.size();++i)
        {
            if(nums[i]==current)
                continue;
            else
            {
                nums[counter]=nums[i];
                current=nums[i];
                ++counter;
            }
        }
       return counter;
    }
};