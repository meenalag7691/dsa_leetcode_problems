// class Solution {
// public:
//     vector<int> distributeCandies(int candies, int num_people) {
//         vector<int> ans(num_people);
//         int i = 0;
//         while(candies != 0 && i<num_people)
//         {
//             ans[i] = i+1;
//             candies -= (i+1);
//         }
//         if(candies != 0)
//         {
//             while(candies)
//         }


//     }
// };
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int i = 0;
        int give = 1;

        while (candies > 0) {
            if (candies >= give) {
                ans[i] += give;
                candies -= give;
            }
            else {
                ans[i] += candies;
                candies = 0;
            }

            give++;
            i++;

            if (i == num_people) {
                i = 0;
            }
        }

        return ans;
    }
};