#include<stdio.h>
int main(){
    int num = 6, count = 0, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    for(int i = 1; i < num; i++){
        if(num % i == 0){
           sum += i;
        }
    }

    if(num == sum){
        printf("Perfect number");
    }
    else{
        printf("Non-perfect number");
    }
}