#include<stdio.h>
int main() {
    int n = 6;
    for(int i = 0; i < n; i++){
        for(int sp = 1; sp <= n - 2 * i; sp++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

// *    *
// **  **
// ******