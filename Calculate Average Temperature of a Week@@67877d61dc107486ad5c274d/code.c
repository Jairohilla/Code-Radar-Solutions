#include<stdio.h>

int i,temp;
char day[100];
float avg_temp;
for (i = 1;i <= 7;i++)
{
    scanf("%s %d",&day,&temp);
}
avg_temp=(avg_temp+temp)/7;
printf("Average Temperature: %.2f")