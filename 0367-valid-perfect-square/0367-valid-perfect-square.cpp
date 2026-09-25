class Solution {
public:
    bool isPerfectSquare(int num) {
        //2 3 7 8 
        int rem = num % 10;
        if (rem == 2 || rem == 3 || rem == 7 || rem == 8)
          return false;
        long long low = 1;
        int high = num;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;

            if (square == num)
                return true;
            else if (square < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};