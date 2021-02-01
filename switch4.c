#include<stdio.h>
int main()
{
    char operator;
    float m1,m2;
    printf("enter an operator which u want to perform=");
    scanf("%c",&operator);
    printf("enter two operands\n");
    scanf("%f%f",&m1,&m2);
    switch(operator)
    {
        case'+': printf( "%.1f + %.1f =%.1f",m1,m2,m1+m2); break;
        case'-': printf( "%.1f - %.1f =%.1f",m1,m2,m1-m2); break;
        case'*': printf( "%.1f * %.1f =%.1f",m1,m2,m1*m2); break;
        case'/': printf( "%.1f / %.1f =%.1f",m1,m2,m1/m2); break;
        default: printf("\nerror ! operator does not match");


    }
    return 0;
}

