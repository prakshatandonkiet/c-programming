#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=7,b=3,x=7,y=3,sum1,sum2;
    sum1=a+(++b);  /* increment then add */
    sum2=x+(y++);   /* add the increment*/
    printf("\n sum=%d",sum1);
    printf("\n sum2=%d",sum2);

    return 0;
}
