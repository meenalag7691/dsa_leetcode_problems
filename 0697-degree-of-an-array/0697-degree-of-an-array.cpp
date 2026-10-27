class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end());

        int degree = 0, ans = nums.size();

        for (int i = 0; i < arr.size(); ) {
            int j = i;
            int first = arr[i].second;
            int last = arr[i].second;

            while (j < arr.size() &&
                   arr[j].first == arr[i].first) {
                first = min(first, arr[j].second);
                last = max(last, arr[j].second);
                j++;
            }

            int freq = j - i;
            int len = last - first + 1;

            if (freq > degree) {
                degree = freq;
                ans = len;
            } else if (freq == degree) {
                ans = min(ans, len);
            }

            i = j;
        }

        return ans;
    }
};