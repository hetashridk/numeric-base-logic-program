#include<stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num){
        rev = rev * 10 +  num % 10;
        num /= 10;
    }

    printf("sum of digit is %d", rev);
}