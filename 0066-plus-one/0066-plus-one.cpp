class Solution {
public:
    void add(vector<int>& digits,int i){
        if(digits[i]==9){
            digits[i]=0;
            if(i>0)
                add(digits,--i);
            else

                digits.insert(digits.begin(), 1);
        }
        else{
            ++digits[i];
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        add(digits,digits.size()-1);
        
        return digits;
    }
};