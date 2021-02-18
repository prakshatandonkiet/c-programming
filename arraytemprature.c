#include<stdio.h>
int main(int argc, char const *argv[])
{
    int temprature[7];
    int sum,avg;
    int day;
    for(day=0;day<7;day++)
    {
        printf("\n enter the temprature for day %d",day);
        scanf("%d",&temprature[day]);
    }   
        sum=0;
        for(day=0; day<7;day++)
        sum+=temprature[day];
        avg=sum/7;
        printf("\n average of temprature is %d",avg);
    return 0;
}
