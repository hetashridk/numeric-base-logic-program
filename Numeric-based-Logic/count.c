#include<stdio.h>
int main() {
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num){
        count++;
        num /= 10;
    }

    printf("count of digit is %d", count);
}