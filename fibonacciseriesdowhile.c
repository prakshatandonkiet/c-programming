#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int a=0;
    long int e=1;
    long int b=1;
    int c=1,n;
    printf("\n Enter the number of term you want in fibonacci series:");
    scanf("%d",&n);
    do
    {
        printf("%d\n",b);
        b=a+e;
        a=e;
        c=c+1;

    }
     while(n>=c);


    return 0;
}



