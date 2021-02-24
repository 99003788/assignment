 #include "mystring.h"
 #include<string.h>
 char* concatenateString(char *str1, char *str2)
 {
    int i,j ;
    i= strlen(str1) ;
    for(j= 0 ; str2[j] != '\0' ; j++)
        {
            str1[i] = str2[i] ;
            i++;
        }
    str1[i] =  '\0';
    return str1 ;

 }