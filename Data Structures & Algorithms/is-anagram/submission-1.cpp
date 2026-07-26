class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // // sort(t.begin(),t.end());
        // // return s==t;
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(int i=0;i<s.size();i++){
            map1[s[i]]++;
            map2[t[i]]++;
        }
        return map1==map2;
    }
};
