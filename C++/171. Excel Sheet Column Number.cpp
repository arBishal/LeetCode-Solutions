class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int ans=0, exp=0, pos;
        int n=columnTitle.size();
        
        for(int i=n-1; i>=0; i--)
        {
            pos=columnTitle[i]-'A'+1;
            ans=ans+pow(26, exp)*pos;
            exp++;
        }
        
        return ans;
    }
};