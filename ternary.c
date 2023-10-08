#include <stdio.h>

int main() {
    int a = 5;
    int b = 4;
    int c = 2;

    (a > b) ? ((a > c) ? printf("a is greater") : printf("c is greater")) : ((b > c) ? printf("b is greater") : printf("c is greater"));

printf("hello");
    return 0;
}
