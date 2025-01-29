#include <stdio.h>

int main() {
    int num,n,bit;
    scanf("%d%d",&num,&n);
    bit = (num >> n) & 0;
    printf("%d",bit);
    return 0;
}