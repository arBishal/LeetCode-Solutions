///without converting the number into a string

class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;
    if(x%10==0 and x!=0) return false;
    int rev=0;
    while(x>rev)
    {
        rev=rev*10+(x%10);
        x=x/10;
    }
    if(rev==x or rev/10==x) return true;
        else return false;
    }
};
