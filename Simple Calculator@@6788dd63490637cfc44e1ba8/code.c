#include <stdio.h>

int main() {
    char ch;
    int a,b;
    int add,sub,multi,div;
    scanf("%d%d%c",&a,&b,&ch);
    if (ch == '+')
    {
        add = a + b;
        printf("%d",add);
    }

    return 0;
}