class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> umap;
        for (int i = 0; i < names.size(); ++i) {
            umap[heights[i]] = names[i];
        }
        int j = 0;
        for (auto i = umap.rbegin(); i != umap.rend(); ++i) {
            names[j] = i->second;
            ++j;
        }
        return names;
    }
};