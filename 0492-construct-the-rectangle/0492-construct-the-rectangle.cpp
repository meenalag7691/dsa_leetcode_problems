#include <cmath>
class Solution {
public:
    vector<int> constructRectangle(int area) {
      int width ;
      int length;
     int i = floor(sqrt(area)) ; 
     while(area % i != 0)
     {
        i--;
     }
     width = i;
     length = area/width;
     vector<int>ans;
     ans.push_back(length);
     ans.push_back(width);
     return ans;

    }
};