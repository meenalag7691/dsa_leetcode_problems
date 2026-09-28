class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = n-1;
        while(i>1)
        {
            
           int num1 = nums[i];
           int num2 = nums[i-1];
           int num3 = nums[i-2];
           if(num2+num3 > num1)
            // triangle possible 
            return (num1+num2+num3);
           else
             i--;
        }
        return 0;
          
        
    }
};