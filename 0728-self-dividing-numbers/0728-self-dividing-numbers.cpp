// class Solution {
// public:
//     // vector<int> selfDividingNumbers(int left, int right) {
//     //     for(int i = left ; i<= right ; i++)
//     //     {
//     //         int temp = i;
//     //         int hundreds = temp /100 ;
//     //         int tens = temp/10 - hundreds;
//     //         int ones = temp/1 - tens;
        
//     //     }
//     // }
//     // bool self_diving_number(int number)
//     // {
//     //     if(number )
//     // }
    

// };

class Solution {
public:

    bool self_diving_number(int number)
    {
        int temp = number;

        while(temp > 0)
        {
            int digit = temp % 10;

            // Number contains 0
            if(digit == 0)
                return false;

            // Number is not divisible by its digit
            if(number % digit != 0)
                return false;

            temp = temp / 10;
        }

        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;

        for(int i = left; i <= right; i++)
        {
            if(self_diving_number(i))
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

