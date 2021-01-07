#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i,sum=0;
    printf("enter five number to find their sum=");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=5;i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum of five numbers=%d",sum);
    return 0;
}
