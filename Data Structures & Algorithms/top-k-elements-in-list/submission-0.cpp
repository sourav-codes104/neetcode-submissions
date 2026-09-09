class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>bucket(n+1);
        unordered_map<int,int>mpp;
        vector<int>ans;
        

        for(auto it : nums){
            mpp[it]++;
        }

        for(auto it : mpp){
            int freq = it.second;
            int element = it.first;
            bucket[freq].push_back(element);
        }

        for(int i = n ; i >=0; i--){
            if(bucket[i].size()==0) continue;

            while(bucket[i].size()>0 && k>0){
                int x = bucket[i].back();
                ans.push_back(x);
                bucket[i].pop_back();
                k--;
            }
        }
        return ans;
    }
};
