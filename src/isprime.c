#include "myutils.h"

int checkPrime(int num)
{
    int i;
    for(i=2 ; i<=num- 1;i++)
    {
        if(num % i ==0)
            return 0;   
    }
    return 1; 
}