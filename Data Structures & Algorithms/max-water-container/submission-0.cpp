class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int right = n-1;
        int left = 0;

        int maxAmount = 0;

        while(left < right){
            int length = min(heights[left],heights[right]);
            int width = right-left;
            maxAmount = max(maxAmount,length*width);
            if(heights[left] < heights[right]) left++;
            else right--;
        }
        return maxAmount;
    }
};
