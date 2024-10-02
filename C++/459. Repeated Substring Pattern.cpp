class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 0; i < s.size()/2; i++)
        {
            string compare = s.substr(i+1, s.size()-i-1) + s.substr(0, i+1);
            if(s==compare) return true; 
        }
        return false;
    }
};