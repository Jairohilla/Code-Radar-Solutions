#include <stdio.h>

int main() {
    int a,b,c;
    float d;
    scanf("%d%d%D",&a,&b,&c);
    d=(a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
}