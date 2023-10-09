#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num){
        sum += num % 10;
        num /= 10;
    }

    printf("sum of digit is %d", sum);
}