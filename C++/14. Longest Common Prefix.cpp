class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string lcp;
    int flag=1;
    for(int j=0; j<strs[0].size(); j++)
    {
        for(int i=0; i<strs.size()-1; i++)
        {
            if(strs[i].size()>j)
                if(strs[i][j]!=strs[i+1][j])
                    {
                        flag=0;
                        break;
                    }
                else
                    continue;
            else break;
        }
        if(flag==1) lcp.push_back(strs[0][j]);
        else break;
    }
    return lcp;
    }
};
