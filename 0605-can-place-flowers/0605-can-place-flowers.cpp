class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int total = flowerbed.size();
        int m = 0;

        for(int i = 0; i < total; i++)
        {
            if(flowerbed[i] == 0)
            {
                bool left = (i == 0 || flowerbed[i-1] == 0);
                bool right = (i == total-1 || flowerbed[i+1] == 0);

                if(left && right)
                {
                    flowerbed[i] = 1;
                    m++;

                    if(m >= n)
                        return true;
                }
            }
        }

        return m >= n;
    }
};