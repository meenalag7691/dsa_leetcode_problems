class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        // Store frequencies to check uniqueness
        unordered_set<int> st;

        for (auto it : freq) {
            if (st.find(it.second) != st.end()) {
                return false;
            }
            st.insert(it.second);
        }

        return true;
    }
};