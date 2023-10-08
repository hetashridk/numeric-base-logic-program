#include<stdio.h>
int main() {
    int num = 25, sum = 0, totalDigit = 0;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    int temp = num;
    int number = num;
    int last = 1;
    while(num){
        totalDigit++;
        num /= 10;
    }

    for(int i = 1; i <  totalDigit; i++){
        last *= 10;
    }

    int check = (temp * temp) % last;

    if(check == number){
        printf("yes automorphic number");
    }
    else{
        printf("no automorphic number");
    }

}