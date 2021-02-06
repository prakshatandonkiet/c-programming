#include<stdio.h>
void main()
{
    int i,j;
    int x,y;
    j=i=8;
    printf("initial value of i =%d\n",j);
    x=i++;
    printf("x=i++,value of x=%d,and value of i=%d\n",x,i);   // post incremet
    i=j;
    y=++i;
    printf("initial value of i=%d\n",j);
    printf("y=++i,value of y=%d,and value of i=%d\n",y,i);  // pre increment

}