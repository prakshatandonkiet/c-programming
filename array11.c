#include<stdio.h>
int main()
{
    int n,pos,val;
    int a[100];
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("enter the %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the postion at which you want to insert elements in an array\n");
    scanf("%d",&pos);
    printf("enter the value you want to insert elements in an array\n");
    scanf("%d",&val);
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    printf("array after element insertion is\n");
     for(int i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}