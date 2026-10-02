class Solution {
public:
    bool isSameAfterReversals(int num) {
        string str = to_string(num);
        reverse(str.begin(), str.end());
        int a = stoi(str);
        str = to_string(a);
        reverse(str.begin(), str.end());
        int temp = stoi(str);
        if(temp == num)
         return true;
        else 
          return false;
    }
};