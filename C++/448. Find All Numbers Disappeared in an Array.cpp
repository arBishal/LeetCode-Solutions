class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        int track[size + 1];
        memset(track, 0, sizeof(track));

        for(int i = 0; i<nums.size(); i++)
            track[nums[i]] = 1;

        vector<int> answer;

        for(int i = 1; i <= size; i++)
            if(track[i] == 0) answer.push_back(i);

        return answer;

    }
};

//without extra space

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[abs(nums[i]) - 1] > 0) nums[abs(nums[i]) - 1] = nums[abs(nums[i]) - 1] * (-1);
        }

        vector<int> answer;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            {
                answer.push_back(i + 1);
            }
        }
        
        return answer;
    }
};