class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int y = target-nums[i];
            if(mpp.contains(y)){
                return {mpp[y],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
