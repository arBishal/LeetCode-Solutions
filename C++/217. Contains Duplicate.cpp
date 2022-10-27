///using set (faster)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<long long> st;
        
        for(int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        if(st.size()==nums.size()) return false;
        else return true;
        
    }
};

///using map (slower)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<long long, int> mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]) return true;
            else mp[nums[i]]++;
        }
        
        return false;
        
    }
};