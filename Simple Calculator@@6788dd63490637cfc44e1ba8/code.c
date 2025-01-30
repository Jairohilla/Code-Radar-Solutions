#include <stdio.h>

int main() {
    int a,b,c;
    int add,sub,multi,div;
    char d;
    scanf("%d%d%c",&a,&b,&d);
    if (d == '+')
    {
        add = a + b;
        printf("%d",add);
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