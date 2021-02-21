#include<stdio.h>
int sum (int,int);
int main(int argc, char const *argv[])
{
    int(*psum)(int,int);
    int num1,num2;
    psum=sum;
    printf("\n enter number 1=>");
    scanf("%d",&num1);
    printf("\n enter number 2=>");
    scanf("%d",&num2);
    printf("sum of two number using function is=%d",sum(num1,num2));
    printf("sum of two number using function pointer is=%d",psum(num1,num2));
    return 0;
}

   
   
       int sum(int num1,int num2)
   {
       return(num1+num2);

   }
   
       int sum1(int n1,int n2)

   {
       return n1+n2;
   }

    

        
    

