class Solution {
public:
    int getSum(int a, int b) {
        
        int ans;
        unsigned carry;
        
        if(a==0) ans=b;
        else if(b==0) ans=a;
        
        while(b)
        {
            ans=a^b;
            carry=(a&b);
            a=ans;
            b=carry<<1;
        }
        
        return ans;
    }
};