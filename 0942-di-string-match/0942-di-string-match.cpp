class Solution {
public:
    vector<int> diStringMatch(string s) {
       int low = 0;
        int high = s.length();

        vector<int> perm;

        for (char ch : s) {
            if (ch == 'I') {
                perm.push_back(low);
                low++;
            } else {
                perm.push_back(high);
                high--;
            }
        }

        perm.push_back(low);

        return perm; 
    }
};