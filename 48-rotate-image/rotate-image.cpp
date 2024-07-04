class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
        std::vector<int>& row = matrix[i];
        std::reverse(row.begin(), row.end());
        }
    }
};