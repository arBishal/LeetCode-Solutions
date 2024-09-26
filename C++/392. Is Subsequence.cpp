class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        if(t.size() == 0) return false;

        int sp = 0, tp = 0;
        while(sp < s.size() and tp < t.size())
        {
            if(s[sp] == t[tp])
            {
                sp++;
                tp++;
                if(sp == s.size()) return true;
            }
            else tp++;
        }
        return false;
    }
};