
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> result;

        int n = nums.size();
        int left = 0, right = n - 1;

        // Find first occurrence
        int first = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                if (nums[mid] == target)
                    first = mid;

                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        if (first == -1)
            return result;

        // Find last occurrence
        left = first;
        right = n - 1;

        int last = first;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= target) {
                if (nums[mid] == target)
                    last = mid;

                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        for (int i = first; i <= last; i++) {
            result.push_back(i);
        }

        return result;
    }
};
