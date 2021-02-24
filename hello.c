#include<stdio.h>
#include<unistd.h>

int main()
{
    int a=0;
    a= fork();
    printf("hi,a=%d",a);
}