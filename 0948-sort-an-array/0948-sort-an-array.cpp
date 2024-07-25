class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> orderm;
        for(auto num : nums)
        {
            ++orderm[num];
        }
        int counter = 0;
        for(auto num : orderm)
        {   
            for(int i = 0;i<num.second;++i)
            {   
                nums[counter]=num.first;
                ++counter;

            }
            
        }
        
        return nums;
    }
};