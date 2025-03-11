#include<stdio.h>

int main(){
    int n,row,col;
    scanf("%d",&n);
    for (row = 0;row <= 2 * n - 1;row++) {
        for (int space = 1;space <= col;space++) {
            printf(" ");
        }
        for (col = 1;col <= n;col++) {
            printf("*");                
        }
        printf("\n");
    }
    return 0;
}