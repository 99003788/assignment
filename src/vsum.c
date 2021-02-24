#include<stdarg.h>
#include "myutils.h"


double vsum(int num ,...)
{
    va_list valist;
    double sum = 0;
    int i ;
    va_start (valist , num);
    for( i=0;i< num ;i++)
    {
        sum+= va_arg(valist , int);
    }
    va_end(valist);
    return sum;
}