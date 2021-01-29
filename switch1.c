#include<stdio.h>
int main()
{
    int number;
    printf("Enter  a number");
    scanf("%d",&number);
    switch(number%2)
    {
        case 0: printf("Number is even");
        case 1:printf("Number is odd");
    }
    return 0;
}