#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int row = 0;row <= 2 * n - 1;row++) {
        for (int space = 1;space <= col;space++) {
            printf(" ");
        }
        for (int col = 1;col <= n;col++) {
            printf("*");                
        }
        printf("\n");
    }
    return 0;
}