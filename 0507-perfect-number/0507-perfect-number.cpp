class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>divisors;
        for(int i = 1 ; i< num; i++)
        {
            if(num%i == 0)
                divisors.push_back(i);
            
        }
        int n = divisors.size();
        int sum = 0;
        for(int j = 0; j<n;j++)
        {
            sum += divisors[j];
        }
        if(sum == num)
          return true;

        return false;
    }
};