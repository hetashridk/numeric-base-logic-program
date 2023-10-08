#include<stdio.h>
int main(){
    int num = 11, count = 0, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            sum += i;
            count++;
        }
    }

    if(sum > num){
        printf("abundant");
    }
    else{
        printf("no abundant");
    }
}