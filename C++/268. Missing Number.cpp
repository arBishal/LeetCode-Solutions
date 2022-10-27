/// O(1) space complexity and O(NlogN) time complexity

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int ans;
        sort(nums.begin(), nums.end());
        
        if(nums[0]!=0) ans=0;
        else if(nums[nums.size()-1]!=nums.size()) ans=nums.size();
        else
        {
            for(int i=0; i<nums.size()-1; i++)
            {
                if(nums[i+1]-nums[i]!=1)
                {
                    ans=i+1;
                }
            }
        }
        
        return ans;
    }
};

/// O(1) space complexity and O(N) time complexity

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int currsum=0, realsum=(nums.size()*(nums.size()+1))/2;
        
        for(int i=0; i<nums.size(); i++)
        {
            currsum+=nums[i];
        }
        
        return realsum-currsum;
    }
};