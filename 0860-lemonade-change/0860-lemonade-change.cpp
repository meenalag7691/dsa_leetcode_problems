class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int count5 = 0;
        int count10 = 0;
        for(int i = 0; i<n; i++)
        {
            if(bills[i] == 5)
            {
                count5++;
            }  //return 0
            else if(bills[i] == 10)
              {
                if(count5 == 0)
                 return false;
                else
                {
                    count5 = count5-1;
                    count10++;
                } 
                 
              }
            else
              {
                if(count5 == 0 )
                 return false;
                else if(count10 == 0  )
                {  if(count5 >= 3)
                     count5 = count5-3;
                    else
                      return false;
                }
                else
                {
                    count5--;
                    count10--;
                }
              }
        }
        return true;
    }
};