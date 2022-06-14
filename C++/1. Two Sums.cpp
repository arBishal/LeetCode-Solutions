//solution 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>solution;
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                    break;
                }
            }
        }
        return solution;
    }
};

//solution 2

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>solution;
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end())
            {
                solution.push_back(i);
                solution.push_back(mp[temp]);
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return solution;
    }
};
