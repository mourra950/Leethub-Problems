class Solution {
public:
    int scoreOfString(string s) {
        int count=0;
        for(int i =0;i<s.length()-1;++i){
            cout<<int(s[i])<<endl;
            count+=abs(s[i]-s[i+1]);
        }
        return count;
    }
};