class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;

        while (num > 0) 
        {
         int digit = num % 10;
         num /= 10;
         arr.push_back(digit);
        }
        sort(arr.begin(),arr.end());
        int min_sum = (arr[0]*10)+arr[2] +( arr[1]*10) +arr[3];
        return min_sum;
      
      
    }
};