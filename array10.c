#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],size,i,search,flag;
    printf("\n enter the size of an array:");
    scanf("%d",&size);
    printf("\n %d element of an array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the search element:");
    scanf("%d",&search);
    flag=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        printf("\n we found the search element %d at position %d",search,i+1);

    }
    else
    
        {
          printf("%d sorry!! we have not found the seach element %d",search) ; 
        }
        return 0;
    }
    
    
    
    
    

