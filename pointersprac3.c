#include<stdio.h>
int main()
{
  int c,d,temp=0;
  int *p1,*p2;
   
 printf("Enter the value of C => "); scanf("%d",&c);
 printf("Enter the value of D => "); scanf("%d",&d);
   
 p1=&c; p2=&d;

temp=*p1;
*p1=*p2;
*p2=temp;


printf("Value after swapping using pointer \n");

printf("Value of C is => %d\n",*p1);
printf("Value of D is => %d",*p2);
return 0;
}
