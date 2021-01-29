#include<stdio.h>
int main()
{
    int weekday;
    printf("Enter the Day number 1 to 7");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1:
        printf("\nToday is Monday");
        break;
          case 2:
        printf("\nToday is Tuesday");
        break;
         case 3:
        printf("\nToday is Wednesday");
        break;
         case 4:
        printf("\nToday is Thursday");

        break;
         case 5:
        printf("\nToday is Friday");
        break;
         case 6:
               printf("\nToday is Saturday");
                break;
         case 7:
              printf("\nToday is Sunday");
               break;
        default:
                 printf("\nPlease enter valid number between 1 to 7");

                 
    
      return 0;
    }

}