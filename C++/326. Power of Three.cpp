class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        double val=log(n)/log(3);
        if(abs(round(val)-val)<1e-10) return true;
        else return false;
    }
};