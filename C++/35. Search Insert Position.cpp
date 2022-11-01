class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int pos;
        
        if(nums[0]>target) pos=0;
        else if(nums[nums.size()-1]<target) pos=nums.size();
        else
        {
           for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]==target)
                {
                    pos=i;
                }
                else if(nums[i]<target and nums[i+1]>target)
                {
                    pos=i+1;
                }
            } 
        }
        
        return pos;
    }
};