class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int best_ending = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            best_ending = max(best_ending + nums[i], nums[i]);
            ans = max(ans, best_ending);
        }

        return ans;
    }

    int minSubArray(vector<int>& nums) {
        int best_ending = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            best_ending = min(best_ending + nums[i], nums[i]);
            ans = min(ans, best_ending);
        }

        return ans;
    }

    int maxAbsoluteSum(vector<int>& nums) {
        int maximum = maxSubArray(nums);
        int minimum = minSubArray(nums);

        return max(abs(maximum), abs(minimum));
    }
};