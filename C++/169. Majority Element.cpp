// if there are more than 2 distinct element

/// O(1) space complexity and O(NlogN) time complexity

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int left=0, right=0, occur=0, ans;
        sort(nums.begin(), nums.end());
        
        if(nums.size()==1) ans=nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]!=nums[i])
            {
                if(occur<(right-left))
                {
                    occur=right-left;
                    ans=nums[i-1];
                    if(ans>(nums.size()/2)) break;
                }
                left=i;
                right=i;
            }
            else
            {
                right++;
                if(i==nums.size()-1)
                {
                    if(occur<(right-left))
                    {
                        occur=right-left;
                        ans=nums[i-1];
                        if(ans>(nums.size()/2)) break;
                    }
                    
                }
                
            }
        }
        
        return ans;
        
    }
};

// if there are only two distinct elements

/// O(1) space complexity and O(NlogN) time complexity

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()/2];
        
    }
};