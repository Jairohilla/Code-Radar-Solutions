#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a > 1 && a % 10 == 0)
    {
        printf("Prime");
    }
    else 
    {
        printf("Not Prime");
    }
    return 0;
}