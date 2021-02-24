#include "myutils.h"

int factorial( int num )
{
    int i , fact = 0 ;
    for(i=1 ; i <= num ; i++)
    {
        fact = fact * i ;
    }
    return fact;
}