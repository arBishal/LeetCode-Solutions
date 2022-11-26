///O(n) time complexity and O(n) space complexity

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> lp(nums.size()), rp(nums.size());
        
        lp[0]=1;
        rp[nums.size()-1]=1;
        
        for(int i=1, j=nums.size()-2; i<nums.size(), j>-1; i++, j--)
        {
            lp[i]=lp[i-1]*nums[i-1];
            rp[j]=rp[j+1]*nums[j+1];
        }   
        
        vector<int>ans;
        
        for(int k=0; k<nums.size(); k++)
        {
            ans.push_back(lp[k]*rp[k]);
        }
        
        return ans;
    }
};

///O(n) time complexity and O(1) spcae complexity [except the output array]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> rp(nums.size());
        
        rp[nums.size()-1]=1;
        
        for(int j=nums.size()-2; j>-1; j--)
        {
            rp[j]=rp[j+1]*nums[j+1];
        }   
        
        int lp=1;
        
        for(int k=0; k<nums.size(); k++)
        {
            rp[k]=rp[k]*lp;
            lp=lp*nums[k];
        }
        
        return rp;
    }
};