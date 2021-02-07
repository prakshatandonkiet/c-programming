#include<stdio.h>
int main()
{
    int r1,c1,i,j,r2,c2;
    printf("enter the size of rows and columns of both the array: ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int a[r1][c1],b[r2][c2];
    if(r1==r2 && c1==c2)
    { 
    printf("\n enter the elements of first array: ");
    for(i=0;i<r1;i++)
    {   for(j=0;j<c1;j++)
        {   scanf("%d",&a[i][j]);  }   
    }
    printf("\n your first 2d array is:\n");
    for(i=0;i<r1;i++)
    {   for(j=0;j<c1;j++)
        {   printf(" %d",a[i][j]);  } 
        printf("\n");  
    }
    printf("\n enter the elements of second array: ");
    for(i=0;i<r2;i++)
    {   for(j=0;j<c2;j++)
        {   scanf("%d",&b[i][j]);  }   
    }
    
    printf("\n your second 2d array is:\n");
    for(i=0;i<r2;i++)
    {   for(j=0;j<c2;j++)
        {   printf(" %d",b[i][j]);  } 
        printf("\n");  
    }
    printf("\n your 2d array after addition is:\n");
    int sum=0;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum = a[i][j]+b[i][j];
            printf(" %d",sum);
        }
        printf("\n");
    }
    }
    else 
    printf("\n addition is not possible.");
    return 0;
}
