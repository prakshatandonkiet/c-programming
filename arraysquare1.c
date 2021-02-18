#include<stdio.h>
int main(int argc, char const *argv[])
{
    int square[11],i;
    for(i=0;i<11;i++)
    {
        square[i]=i*i;
        printf("\n square [%d] %d",i,square[i]);
    }
    return 0;
}
