#include <stdio.h>

int main() {
    int a;
    scanf("%ld",&a);
    if (a & -1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}