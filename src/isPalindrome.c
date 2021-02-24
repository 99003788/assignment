#include "myutils.h"

int checkPalindrome(int num)
{
    int t=0 , r=1 , rev =0;
    t=num;
    while(num != 0)
    {
        r = num % 10 ;
        rev = rev * 10 + r ;
        num= num/10;
    }
     if(rev == t )
        return 0;
     else   
        return 1  ; 
}