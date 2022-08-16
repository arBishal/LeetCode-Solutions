class Solution {
public:
    int strStr(string haystack, string needle) {
        int ns=needle.size();
        int hs=haystack.size();
        if(ns==0) return 0;
        if(ns>hs) return -1;
        for(int i=0;i<=(hs-ns);i++)
        {
            if(haystack.substr(i,ns)==needle) return i;
        }
        return -1;
    }
};