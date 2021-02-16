#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,value;
    for(i=1;i<=10;i++)
    {
        printf("enter  number \n");
        scanf("%d",&value);
        if(value<=0)
        {
            printf("error:");
            printf("zero or negative value found\n");
            goto error;
        }
    }
       error:
    return 0;
}
