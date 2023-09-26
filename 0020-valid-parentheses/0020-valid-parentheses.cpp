class Solution {
public:
    bool isValid(string s) {
        int sum[3]={0};
        stack<char> stack;
        for (int i =0 ; i<s.length();i++)
        {
            if(s[i]=='[')
                stack.push(s[i]);
            
            else if(s[i]=='(')
                stack.push(s[i]);
            
            else if(s[i]=='{')
                stack.push(s[i]);
            else if(!stack.empty()){
             if(s[i]==']'){
                if(stack.top()!='[')
                    return false;
                stack.pop();
                }
            else if(s[i]==')'){
                if(stack.top()!='(')
                    return false;
                stack.pop();
                }
            else if(s[i]=='}'){
                if(stack.top()!='{')
                    return false;
                stack.pop();
                }
                }
                else{
                    return false;
                }
        }
        if(stack.empty())
            return true;
        return false;
    }
};