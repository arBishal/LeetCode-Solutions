class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int counter = 0;

        for (int i = s.length()-1; i >= 0; i--)
        {
            if (flag and s[i] == ' ') break;
            if (s[i] != ' ')
            {
                counter++;
                flag = true;
            }
        }

        return counter;
    }
};