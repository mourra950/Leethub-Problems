class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result_list;
        for(int i = 0; i < words.size();++i)
        {
            if(words[i].find(x)!= std::string::npos){
                result_list.push_back(i);
            }
        }
        return result_list;
    }
};