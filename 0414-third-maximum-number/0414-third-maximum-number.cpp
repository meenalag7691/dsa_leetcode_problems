class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {
            long long n = num;

            // Ignore duplicates
            if (n == first || n == second || n == third)
                continue;

            // Largest
            if (n > first) {
                third = second;
                second = first;
                first = n;
            }
            // Second largest
            else if (n > second) {
                third = second;
                second = n;
            }
            // Third largest
            else if (n > third) {
                third = n;
            }
        }

        // If third maximum doesn't exist
        return third == LLONG_MIN ? first : third;
    }
};