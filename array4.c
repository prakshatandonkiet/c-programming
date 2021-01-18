#include<stdio.h>
int main(int argc, char const *argv[])
{
    int value[10];
    printf("enter any 10 numbers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&value[i]);
        
    }
    printf("display the values:");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",value[i]);
    }
    return 0;
}
