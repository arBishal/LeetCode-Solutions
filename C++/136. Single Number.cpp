class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int ans;
        if(nums.size()==1) ans=nums[0];
        
        int i;
        for(i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1]) i++;
            else ans=nums[i];
        }
        
        if(i==nums.size()-1) ans=nums[nums.size()-1]; 
        
        return ans;
    }
};