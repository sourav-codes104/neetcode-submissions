class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>ans;

        for(auto spell : strs){
            string key = spell;
            sort(key.begin(),key.end());

            mpp[key].push_back(spell);
        }

        for(auto ch : mpp){
            ans.push_back(ch.second);
        }
        return ans;
    }
};
