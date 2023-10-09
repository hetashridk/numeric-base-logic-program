#include<stdio.h>
int main(){
    int num1 = 284, count = 0, sum1 = 0, num2 = 220, sum2 = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    for(int i = 1; i < num1; i++){
        if(num1 % i == 0){
           sum1 += i;
        }
    }
    for(int i = 1; i < num2; i++){
        if(num2 % i == 0){
           sum2 += i;
        }
    }

    if(num1 == sum2 && num2 == sum1){
        printf("ambicale pair");
    }
    else{
        printf("Non-amicale pair");
    }
}