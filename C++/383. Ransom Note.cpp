class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) return false;
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int i = 0, j = 0;
        while(i < ransomNote.size() and j < magazine.size())
        {
            if(ransomNote[i] == magazine[j]) i++, j++;
            else if(ransomNote[i] > magazine[j]) j++;
            else return false;
        }

        if(i < ransomNote.size()) return false;

        return true;
    }
};

// optimized solution with map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) return false;
        
        unordered_map<char, int> ransomFreq;
        unordered_map<char, int> magazineFreq;

        int i = 0, j = 0;
        while(i < ransomNote.size() or j < magazine.size())
        {
            if(i < ransomNote.size()) ransomFreq[ransomNote[i]]++, i++;
            if(j < magazine.size()) magazineFreq[magazine[j]]++, j++;
        }

        for(int k = 0; k< ransomNote.size(); k++)
        {
            if(ransomFreq[ransomNote[k]] > magazineFreq[ransomNote[k]]) return false;
        }

        return true;
    }
};