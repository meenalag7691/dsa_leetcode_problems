class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int cols = accounts[0].size();
        int maxSum = 0;
        for(int i = 0; i<rows; i++)
        {  
            //accounts[0]
            int sum = 0;
            for(int j = 0; j<cols; j++)
            {
                 sum += accounts[i][j];
            }
             maxSum = max(maxSum , sum);
             
        }
        return maxSum;
        
       }
};