class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int right = rows*cols-1;
        int left = 0;
        

        while(left <= right){
            int mid = left+(right-left)/2;

            int col = mid%cols;
            int row = mid/cols;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col] > target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return false;
    }
};
