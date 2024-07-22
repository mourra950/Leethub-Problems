class Solution {
public:
    int strStr(string haystack, string needle) {
        auto i = haystack.find(needle);
        if(i!=string::npos)
        {
            return i;
        }
        return -1;
    }
};