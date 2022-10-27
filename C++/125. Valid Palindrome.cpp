class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(int i=0; i<s.size(); i++)
        {
            int c=int(s[i]);
            if(c<58 and c>47) res.push_back(s[i]);
            else if(isupper(c))
            {
                res.push_back(tolower(c));
            }
            else if(islower(c))
            {
                res.push_back(c);
            }
        }
        string resrev=res;
        reverse(resrev.begin(), resrev.end());
        
        if(res==resrev) return true;
        else return false;
    }
};