class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0, right=height.size()-1, armax=0;
        
        while(left<right)
        {
            armax=max(armax,((right-left)*min(height[left], height[right])));
            
            if(height[left]<height[right]) left++;
            else if(height[right]<height[left]) right--;
            else
            {
                left++;
                right--;
            }
        }
        
        return armax;
    }
};