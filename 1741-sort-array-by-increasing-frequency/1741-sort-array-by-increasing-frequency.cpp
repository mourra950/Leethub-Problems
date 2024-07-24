class Solution {
public:
    bool comparevalues(int a, int b,unordered_map<int,int> c) 
    { 
        if(c[a]<c[b])
            return true;
        else if(c[a]>c[b])
            return false;
        else
            return a>b;
    } 
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> uomap;
        for(auto num : nums)
        {
            if(uomap.find(num)==uomap.end())
                uomap[num]=0;
            ++uomap[num];
        }
        sort(nums.begin(), nums.end(),[this,&uomap](int a , int b){
            return comparevalues(a,b,uomap);
            }); 
    return nums;
        
    }
};