#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d%d%c",&a,&b,&d);
    if (d == '+')
    {
        printf("%d",a + b);
    }
    else if (d == '-')
    {
        sub = a - b;
        printf("%d",sub);
    }
    else if (d == '*')
    {
        multi = a * b;
        printf("%d",multi);
    }
    else if (d == '/')
    {
        div = a / b;
        printf("%d",div);
    }
    return 0;
}