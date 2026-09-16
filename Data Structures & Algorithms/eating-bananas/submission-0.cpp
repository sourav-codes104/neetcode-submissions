class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
        int ans = -1;
        while(left <= right){
            int mid = left+(right-left)/2;
            int k = 0;
            for(int i =0; i <piles.size(); i++){
                k += ceil((double)piles[i]/mid);
            }
            if( k <= h){
               ans = mid;
               right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};
