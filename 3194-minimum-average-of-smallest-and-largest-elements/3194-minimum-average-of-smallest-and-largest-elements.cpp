class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(),nums.end());
       vector<float>averages;
       for(int i = 0; i<n/2; i++)
       {
         float avg = float((nums[i]+nums[n-i-1]))/2;
         averages.push_back(avg);
       } 
       sort(averages.begin(),averages.end());
       double sol = averages.front();
       return sol;

    }
};