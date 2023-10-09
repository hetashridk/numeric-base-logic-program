#include<stdio.h>
// int power(int number, int base){
//     for(int i = 0; i < base; i++){
//         number *= base;
//     }
//     return number;
// }
int main() {
    int num = 9, rem, sum = 0;
    int pow = num * num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    int temp = num;
    while(num){
        rem = pow % 10;
        sum += rem;
        pow /= 10;
    }


    if(temp == sum){
         printf("Yes neon");
    }
    else{
        printf("No neon");
    }

}