#include<stdio.h>

int main() {
    int n,row,col;
    for (row = 1;row <= n; row++) {
        for (col = n;col <= 1;col--) {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}