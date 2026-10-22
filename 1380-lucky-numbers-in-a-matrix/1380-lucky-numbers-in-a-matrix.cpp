
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> row_min;
        vector<int> col_max;

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Har row ka minimum element
        for (int i = 0; i < rows; i++) {
            int mn = matrix[i][0];

            for (int j = 1; j < cols; j++) {
                mn = min(mn, matrix[i][j]);
            }

            row_min.push_back(mn);
        }

        // Har column ka maximum element
        for (int j = 0; j < cols; j++) {
            int mx = matrix[0][j];

            for (int i = 1; i < rows; i++) {
                mx = max(mx, matrix[i][j]);
            }

            col_max.push_back(mx);
        }

        // Lucky number find karna
        vector<int> ans;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == row_min[i] &&
                    matrix[i][j] == col_max[j]) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};
