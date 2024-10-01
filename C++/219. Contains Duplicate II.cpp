class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, long> um;
        for(int i = 0; i < nums.size(); i++)
        {
            // adding 1 to handle the first index (0)
            if(!um[nums[i]]) um[nums[i]] = i + 1;
            else
            {
                if(i + 1 - um[nums[i]] <= k) return true;
                else um[nums[i]] = i + 1;
            }
        }
        return false;
    }
};