#include<stdio.h>
int main()

{
    int choice,a,b,s;
    while(1)
    printf("\n 1.  addition");
    printf("\n 2. odd even");
    printf("\n 3 . finding N natural numbers");
    

    printf("\n Enter any choice ");
    scanf("%d",&choice);
    switch(choice)
    
    {
       case 1:
       printf("\n enter two numbers");
       scanf("%d %d",&a, &b);
       s=a+b;
       printf("\n addition is %d",s);
       break;

       case 2:
       printf("\n Enter a number");
       scanf("%d",&a);
      if( a%2==0)
      printf(" number is even");
      else
       printf("number is even");
       break;

       case 3:
       printf("\n Enter a number");
       scanf("%d",&a);
       for(b=1;b<=a;b++)
       printf("%d",b);
       break;

       
       default:
       printf(" invalid choice");
    }

    

    
    return 0;
}

