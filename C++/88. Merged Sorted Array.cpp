class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++)
        {
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

///O(m+n) complexity

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index=m+n-1;
        m--;
        n--;
        while(m>=0 and n>=0)
        {
            if(nums1[m]>nums2[n])
            {
                nums1[index]=nums1[m];
                index--;
                m--;
            }
            else if(nums2[n]>nums1[m])
            {
                nums1[index]=nums2[n];
                index--;
                n--;
            }
            else
            {
                nums1[index]=nums1[m];
                index--;
                m--;
                nums1[index]=nums2[n];
                index--;
                n--;
            }
        }
        while(m>=0)
        {
            nums1[index]=nums1[m];
            index--;
            m--;
        }
        while(n>=0)
        {
            nums1[index]=nums2[n];
            index--;
            n--;
        }
    }
};