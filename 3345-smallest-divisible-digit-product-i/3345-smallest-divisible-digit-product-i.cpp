class Solution {
public:
    int smallestNumber(int n, int t) {
       
        while(true)
        {   
             int oneplace = n%10;
             int tenplace = (n/10)%10 ;
             int product = 0;
             if(tenplace == 0 )
               product = oneplace;
             else
              product = oneplace * tenplace;
             if(product == 0)
              return n;
           // if(oneplace == 0 & tenplace == 0)
            //number = 100 ->  product = 0
             else if((product) % t == 0)
              return n;
             else 
              n++; 
              
       }
        
    }
};