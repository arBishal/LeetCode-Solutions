class Solution {
public:
    void parse(string s, vector<string> &v) {
        stringstream ss(s);
        string token;
        while(ss >> token)
            v.push_back(token);
    }

    bool wordPattern(string pattern, string s) {
        // firstly, parse the string and get a hold of the words separated by whitespace
        vector<string> v;
        parse(s, v);

        if(pattern.size() != v.size()) return false;

        unordered_map<char, string> mP;
        unordered_map<string, char> mV;

        for(int i = 0; i < pattern.size(); i++)
        {
            if(mP.find(pattern[i]) == mP.end() and mV.find(v[i]) == mV.end())
            {
                mP[pattern[i]] = v[i];
                mV[v[i]] = pattern[i];
            }
            else if(mP.find(pattern[i]) == mP.end() and mV.find(v[i]) == mV.end())
                return false;
            else if(mP[pattern[i]] != v[i] or mV[v[i]] != pattern[i])
                return false;
        }
        return true;
    }
};