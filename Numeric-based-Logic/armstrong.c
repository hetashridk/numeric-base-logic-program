#include<stdio.h>
// int power(int number, int base){
//     for(int i = 0; i < base; i++){
//         number *= base;
//     }
//     return number;
// }
int main() {
    int num, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while(num){
        rem = num % 10;
        sum += (rem * rem * rem);
        num /= 10;
    }


    if(temp == sum){
         printf("Yes armstrong");
    }
    else{
        printf("No armstrong");
    }

}