class Solution {
public:
    int mirrorDistance(int n) {

       //int rev = reverse(n);
       string str = to_string(n);
       reverse(str.begin(), str.end());
       int num = stoi(str);
       return abs(n - num); 
    }
};