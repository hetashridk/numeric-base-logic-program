#include<stdio.h>
int main() {
    int n = 5;
    for(int i = n; i >= 1; i--){
        for(int sp = 1; sp <= n - i; sp++){
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
}

