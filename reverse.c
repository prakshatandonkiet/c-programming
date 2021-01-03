#include<stdio.h>
int main()
{
    int n;
    int m,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        printf("%d",m);
        n=n/10;
    }
    return 0;
    

}
