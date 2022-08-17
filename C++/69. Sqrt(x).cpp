class Solution {
public:
    int mySqrt(int x) {
        long long ans=0;
        while(1)
        {
            if(ans*ans==x) return ans;
            else if(ans*ans>x) return ans-1;
            else ans++;
        }
    }
};

///using binary search

class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        long long mid;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(left+1==right)
            {
                if(left*left<=x and right*right<=x) return right;
                else return left;
            }
            if(mid*mid<x) left=mid;
            else if(mid*mid>x) right=mid-1;
            else return mid;
        }
        return mid-1;
    }
};