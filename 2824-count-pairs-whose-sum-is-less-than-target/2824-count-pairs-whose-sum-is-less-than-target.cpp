
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int count = 0;

        while (left < right) {
            if (nums[left] + nums[right] < target) {
                // All pairs with nums[left] and
                // elements from left+1 to right are valid.
                count += right - left;
                left++;
            } 
            else {
                right--;
            }
        }

        return count;
    }
};
