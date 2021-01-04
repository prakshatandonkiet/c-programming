#include<stdio.h>
int displayNum(int);
int main(int argc, char const *argv[])
{
    displayNum(10);
    return 0;
}
int displayNum(int n)

{
    if(n==1)
    return 1;
    printf("Value of n=%d",n);
    displayNum(n-1);
}
