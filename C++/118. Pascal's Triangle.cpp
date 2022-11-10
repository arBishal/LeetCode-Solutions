class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> v;
        
        v.push_back(vector<int>());
        v[0].push_back(1);
        
        if(numRows==1) return v;
        
        v.push_back(vector<int>());
        v[1].push_back(1);
        v[1].push_back(1);
        
        for(int i=2; i<numRows; i++)
        {
            v.push_back(vector<int>());
            v[i].push_back(1);
            for(int j=0; j<i-1; j++)
            {
                v[i].push_back(v[i-1][j]+v[i-1][j+1]);
            }
            v[i].push_back(1);
        }
        
        return v;
    }
};