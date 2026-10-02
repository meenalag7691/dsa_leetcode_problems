class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int co1 = int(coordinates[0]) - 96;
        int co2 = int(coordinates[1]);
        int temp = co1+co2;
        if(temp % 2)
         return true;
        else 
         return false;
    }
};