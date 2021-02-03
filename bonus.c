/* To calculate the bonus*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int bonus, cy,yoj,yr_of_ser;
    printf("enter the current year and the year of joining \n");
    scanf("%d %d",&cy,&yoj);
    yr_of_ser=cy-yoj;
    if(yr_of_ser>=3)
    {
    bonus=2500;
    printf("bonus =rs.%d",bonus);
    }
    return 0;
}
