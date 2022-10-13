class Solution {
public:
    int climbStairs(int n) {
        int cs[46];
        cs[0]=1;
        cs[1]=1;
        cs[2]=2;
        for(int i=3; i<=n; i++)
        {
            cs[i]=cs[i-1]+cs[i-2];
        }
        return cs[n];
    }
};