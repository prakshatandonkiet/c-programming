#include<stdio.h>
int main(int argc, char const *argv[])
{
    int temper[7];
    int sum,average;
    int day;
    for(day=0;day<7;day++)
    {
        printf("enter temprature of the day is %d",day);
        scanf("%d",&temper[day]);
    }
        sum=0;
        for(day=0; day<7;day++)
        sum+=temper[day];
        average=sum/7;
        printf("average temprature is %d",average);

    return 0;
}
