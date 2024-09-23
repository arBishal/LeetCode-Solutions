class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char, char> m1;
        unordered_map <char, char> m2;

        for(int i = 0; i < s.size(); i++)
        {
            if (m1.find(s[i]) == m1.end() && m2.find(t[i]) == m2.end()) m1[s[i]] = t[i], m2[t[i]] = s[i];
            else if (m1.find(s[i]) == m1.end() || m2.find(t[i]) == m2.end()) return false;
            else if (m1[s[i]] != t[i] || m2[t[i]] != s[i]) return false;
        }

        return true;
    }
};

// optimized solution

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexS(255, 0); 
        vector<int> indexT(255, 0); 
        
        int len = s.length(); 
        
        for(int i = 0; i < len; i++) { 
            if(indexS[s[i]] != indexT[t[i]]) { 
                return false; 
            }
            
            indexS[s[i]] = i + 1; 
            indexT[t[i]] = i + 1;
        }
        
        return true; 
    }
};