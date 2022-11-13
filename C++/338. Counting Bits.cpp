/// O(NlogN) time complexity

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v;
        
        for(int i=0; i<=n; i++)
        {
            int cnt=0, j=i;
            
            while(j)
            {
                if(j%2==1) cnt++;
                j/=2;
            }
            
            v.push_back(cnt);
        }
        
        return v;
    }
};

/// O(N) time complexity, without using __builtin_popcount

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1);
        v[0]=0;
        
        for(int i=1; i<=n; i++)
        {
            v[i]=v[i/2]+i%2;
        }
        
        return v;
    }
};