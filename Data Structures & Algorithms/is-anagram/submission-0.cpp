class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;

        unordered_map<char,int>mpp;

        for(auto ch : s){
            mpp[ch]++;
        }
        for(auto ch : t){
            mpp[ch]--;
            if(mpp[ch]<0)return false;
        }

        return true;
    }
};
