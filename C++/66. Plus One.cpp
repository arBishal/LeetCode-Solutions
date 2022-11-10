class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int flag=0;
        int len=digits.size();
        
        for(int i=len-1; i>=0; i--)
        {
            
            if(digits[i]==9 and i==0)
            {
                digits[i]=1;
                flag=1;
            }
            else if(digits[i]==9 and digits[i-1]<9)
            {
                digits[i]=0;
                digits[i-1]++;
                break;
            }
            else if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                break;
            }
        }
        
                    
        if(flag)
        {
            digits.push_back(0);
        }
        
        return digits;
    }
};