//hashmap approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        unordered_map<int, int> m;

        sort(nums.begin(), nums.end());
        if(nums[0]>0) return ans;

        for(int i=0; i<nums.size(); i++)
            m[nums[i]]=i;

        for(int i=0; i<nums.size()-2; i++)
        {
            if(nums[i]>0) break;

            for(int j=i+1; j<nums.size()-1; j++)
            {
                int target=0-nums[i]-nums[j];
                
                if(m.count(target) and m.find(target)->second>j)
                    ans.push_back({nums[i], nums[j], target});
                
                j=m.find(nums[j])->second;
            }
            i=m.find(nums[i])->second;
        }

        return ans;
    }
};