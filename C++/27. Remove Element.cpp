class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val) count++;
            else
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return count;
    }
};

// optimized approach

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[counter] = nums[i];
                counter++;
            }
        }
        
        return counter;
    }
};