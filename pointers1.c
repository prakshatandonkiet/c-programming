#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num=20;
    int *p1=&num;
    printf("\n value of num=%d",num);
    printf("\n address of num=%p",&num);
    printf("\n value of pointer p1=%d",*p1);
    printf("\n address of the num by pointer =%p",p1);
    printf("\n address of the pointer =%p",&p1);
    return 0;
}
