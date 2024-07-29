class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> nested;

        if(strs.size()==0){
            return nested;
        }else if(strs.size()==1){
        nested.push_back(strs);
            return nested;
        }
        vector<string> strs_copy = strs;
        unordered_map<string,vector<string>> anigram_list;
        int counter =0;
        for(auto str : strs_copy)
        {
            sort(str.begin(),str.end());
            anigram_list[str].push_back(strs[counter]);
            ++counter;
        }
        for(auto list : anigram_list)
        {
            nested.push_back(list.second);
        }
        return nested;
    }
};