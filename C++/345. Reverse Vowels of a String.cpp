class Solution {
public:
    bool isVowel(char c) {
        if(tolower(c) == 'a' or tolower(c) == 'e' or tolower(c) == 'i' or tolower(c) == 'o' or tolower(c) == 'u')
            return true;
        else return false;
    }

    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;

        while(left < right)
        {
            if(isVowel(s[left]) and isVowel(s[right]))
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if(isVowel(s[left])) right--;
            else if(isVowel(s[right])) left++;
            else
            {
                left++;
                right--;
            }
        }

        return s;
    }
};