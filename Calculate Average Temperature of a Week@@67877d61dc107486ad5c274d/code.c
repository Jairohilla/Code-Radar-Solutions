#include<stdio.h>

int main(){
    int i,temp;
    char day[100];
    float avg_temp=0.0;
    for (i = 1;i <= 7;i++)
    {
        scanf("%s %d",&day,&temp);
        avg_temp+=temp;
    }
    avg_temp/=7.0;
    printf("Average Temperature: %.2f",avg_temp);
}