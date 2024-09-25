class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        int counter = 0;
        string token;
        while(ss >> token)
        {
            counter++;
        }
        return counter;
    }
};