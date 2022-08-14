class Solution {
public:
    bool isValid(string s) {
    stack<char> stc;
    if(s.size()%2!=0)
        return false;
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(!stc.empty() and stc.top()=='(' and s[i]==')') stc.pop();
            else if(!stc.empty() and stc.top()=='{' and s[i]=='}') stc.pop();
            else if(!stc.empty() and stc.top()=='[' and s[i]==']') stc.pop();
            else stc.push(s[i]);
        }
        if(stc.empty()) return true;
        else return false;
    }
    }
};
