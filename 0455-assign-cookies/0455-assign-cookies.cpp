
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // Pointer for children
        int j = 0; // Pointer for cookies
        int n = g.size();
        int m = s.size();
        int count = 0;

        while (i < n && j < m) {
            if (s[j] >= g[i]) {
                count++; // Child is satisfied
                i++;     // Move to next child
            }
            j++; // Move to next cookie
        }

        return count;
    }
};

