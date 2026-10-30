
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        // Step 1: Store character ki position
        int pos[26];

        for (int i = 0; i < 26; i++) {
            pos[order[i] - 'a'] = i;
        }

        // Step 2: Consecutive words compare karo
        for (int i = 0; i < words.size() - 1; i++) {

            string s1 = words[i];
            string s2 = words[i + 1];

            int j = 0;

            // Step 3: Characters compare karo
            while (j < s1.size() && j < s2.size()) {

                if (s1[j] != s2[j]) {

                    if (pos[s1[j] - 'a'] > pos[s2[j] - 'a']) {
                        return false;
                    }

                    break;
                }

                j++;
            }

            // Step 4: Prefix condition check karo
            if (j == s2.size() && j < s1.size()) {
                return false;
            }
        }

        return true;
    }
};
