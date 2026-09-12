class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> freq(1001, 0);
        vector<int> ans;

        // Count occurrences in nums1
        for (int num : nums1) {
            freq[num]++;
        }

        // Match with nums2
        for (int num : nums2) {
            if (freq[num] > 0) {
                ans.push_back(num);
                freq[num]--;
            }
        }

        return ans;
    }
};