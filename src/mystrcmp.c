#include "mystring.h"

int compareString(char *str1 , char *str2)
{
    int t = 0 , i = 0 ;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            t = 1 ;
            break;
        }
        i ++ ;
    }

    if (t == 0)
        return 0 ;
    else
        return 1 ;    
}