class Solution {
public:
    int numberOfMatches(int n) 
    {
        int match=0;
        int matchcount;
        while(n>1){
            if(n%2 == 0)
            {
               matchcount=n/2;
               n=n/2;  
               match+=matchcount;
            }
            else
            {
                matchcount=(n-1)/2;
                n=matchcount+1;
                match+=matchcount;  
            } 
        }
         
         return match;
    }
};