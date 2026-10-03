class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int product = 1;
        while(n!=0)
        {
            int temp = n%10;
            n = n/10;
            sum += temp;
            product *= temp;
        }
        if(num % (sum+product) == 0)
          return true;
        else
          return false;
    }
};