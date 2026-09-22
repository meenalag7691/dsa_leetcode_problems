class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int no_delete = arr[0];
        int one_delete = INT_MIN;
        int result = arr[0];

        for (int i = 1; i < n; i++) {
            int prev_no_delete = no_delete;
            int prev_one_delete = one_delete;

            // No deletion
            no_delete = max(prev_no_delete + arr[i], arr[i]);

            // Exactly one deletion:
            // 1. Delete arr[i]
            // 2. Already deleted something before, keep arr[i]
            one_delete = max(prev_no_delete,
                             prev_one_delete == INT_MIN
                                 ? INT_MIN
                                 : prev_one_delete + arr[i]);

            result = max(result, max(no_delete, one_delete));
        }

        return result;
    }
};