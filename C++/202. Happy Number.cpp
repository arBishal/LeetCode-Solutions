class Solution {
public:
    int sumSqDig(int n) {
        
        int sum=0;
        
        while(n)
        {
            sum=sum+(n%10)*(n%10);
            n/=10;
        }
        
        return sum;
    }
    
    bool isHappy(int n) {
        
        map<int, int> mp;
        bool flag=0;
        
        while(1)
        {
            if(mp[n])
            {
                if(n==1) flag=1;
                else flag=0;
                break;
            }
            else
            {
                mp[n]++;
            }
            n=sumSqDig(n);
                
        }
        return flag;
    }
};