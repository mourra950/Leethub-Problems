class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag=false;
        int counter = 0;
        for(int i =s.size()-1;i>=0;--i)
        {
            if(s[i]==' '){
                if(flag)
                    return counter;
                else
                    continue;
            }
            else{
                if(!flag)
                    flag=true;
                ++counter;
            }
        }
        return counter;
    }
};