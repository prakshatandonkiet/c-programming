#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    int x,y;
    j=i=7;
    printf("initial value of i=%d\n",j);
    x=i--;
    printf("x=i--,value of x=%d,and value of i=%d\n",x,i); //post decrement
    i=j;
    y=--i;
    printf("intial value of i=%d",j);
    printf("x=--i,value ofy=%d,and value of i=%d\n",y,i);


    return 0;
}
