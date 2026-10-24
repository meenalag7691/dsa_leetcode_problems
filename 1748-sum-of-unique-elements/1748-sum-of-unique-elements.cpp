
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> counts;

        // Step 1: Count frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }

        // Step 2: Add elements appearing exactly once
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (counts[nums[i]] == 1) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
