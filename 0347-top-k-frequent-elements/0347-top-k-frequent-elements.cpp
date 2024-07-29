class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqs;
        vector<int> top_freq;
        int counter = 0;

        for(auto num : nums){
            freqs[num]++;
        }
        vector<pair<int, int>> vec(freqs.begin(), freqs.end());
        sort(vec.begin(),vec.end(),[](const auto& a, const auto& b){
            return a.second> b.second;
        });
        for(auto freq :vec)
        {
            if(counter==k)
                break;
            top_freq.push_back(freq.first);
            ++counter;
        }
        return top_freq;
    }
};