class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        int aLen = a.size(), bLen = b.size();

        while(aLen or bLen or carry)
        {
            if(aLen) carry = carry + a[--aLen] - '0';
            if(bLen) carry = carry + b[--bLen] - '0';

            result.push_back(carry%2 + '0');
            carry = carry/2;
        }

        reverse(result.begin(), result.end());
        
        return result;
    }
};