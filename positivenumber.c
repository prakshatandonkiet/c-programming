#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if(x>0)
    
    {
        printf("The number is positive ");
    }
     if(x<=0)
     {
         printf("The number is non positive");
     }
    return 0;
}
