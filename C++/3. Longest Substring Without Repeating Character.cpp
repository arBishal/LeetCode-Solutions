class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;

        for(int i=0; i<s.size(); i++)
        {
            map<char, int> m;
            int cnt=0;
            for(int j=i; j<s.size(); j++)
            {
                if(!m[s[j]])
                {
                    m[s[j]]++;
                    cnt++;
                    if(j==s.size()-1)
                    {
                        ans=max(ans, cnt);
                        break;
                    }
                }
                else
                {
                    ans=max(ans, cnt);
                    break;
                }
            }
        }

        return ans;
    }
};