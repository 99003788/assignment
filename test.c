#include "mystring.h"
#include "bitmask.h"
#include "myutils.h"
#include<stdio.h>
#include<stdarg.h>

int main ()
{
    char str1[20] = "Hello-World" ;
    char str2[20]  ;
    char str3[20] = "Hello-World";
    int num = 5 , bit= 1 , Numb = 121 ;

    int flippedNumb ;

    printf("String length = %d\n",findLength(str1));

    printf("String str1 = %s String str2= %s\n", str1 , stringCopy(str1,str2));

    printf("String str1 = %s String str2= %s\n", str1 , concatenateString(str1,str2));

    printf("'0' means equal and '1' means not equal\n");

    printf("Checking...%d\n",compareString(str1,str3));

    printf("Factorial of %d = %d\n", num ,factorial(num));

    printf("'0' means composite and '1' means not prime\n");

    printf("%d\n",checkPrime(num));

    printf("'0' means palindrome and '1' means not palindrome\n");

    printf("%d\n",checkPalindrome(Numb));

    printf("Vsum of 2numbers = %f\n",vsum(2 ,10, 20));

    printf("Set %d = %d\n", num , setBit(num , bit));

    printf("Reset %d = %d\n", num , reset(num , bit ));

    printf("Flip of %d = %d\n", num , flip_no( num , flippedNumb ));

    return 0;
    
}
