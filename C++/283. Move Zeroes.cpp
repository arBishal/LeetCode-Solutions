class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int newind=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                nums[newind]=nums[i];
                newind++;
            }
        }
        
        for(int i=newind; i<nums.size(); i++)
        {
            nums[i]=0;
        }
    }
};