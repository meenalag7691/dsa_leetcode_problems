class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int one1 = num1%10;
        int one2 = num2%10;
        int one3 = num3%10;
        
        int min_one = min({one1,one2,one3});

        int ten1 = (num1/10) % 10;
        int ten2 = (num2/10) % 10;
        int ten3 = (num3/10) % 10;
        int min_ten = min({ten1,ten2,ten3});

        int hun1 = (num1/100) % 10;
        int hun2 = (num2/100) % 10;
        int hun3 = (num3/100) % 10;
        int min_hun = min({hun1,hun2,hun3});

        int tho1 = (num1/1000) % 10;
        int tho2 = (num2/1000) % 10;
        int tho3 = (num3/1000) % 10;
        int min_tho = min({tho1,tho2,tho3});

        return ((min_tho*1000) + (min_hun*100) + (min_ten*10)+ min_one);

    }
};